/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:24:58 by lucocozz          #+#    #+#             */
/*   Updated: 2021/10/27 21:57:12 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	exit_fail(std::fstream *file, std::string const str)
{
	if (file != NULL)
		file->close();
	std::cout << str << std::endl;
	return (1);
}

void	replace_file(std::fstream &file, std::fstream &replace, std::string str, std::string str_replace)
{
	std::size_t	i;
	std::size_t	pos;
	std::string	content;

	while (file.eof() == false)
	{
		i = 0;
		pos = 0;
		std::getline(file, content);
		while (true)
		{
			std::cout << &content[pos] << std::endl;
			i = content.find(str, pos);
			if (i == std::string::npos)
				break;
			replace << content.substr(pos, i);
			replace << str_replace;
			pos = i + str.length();
		}
		if (file.eof() == false)
			replace << std::endl;
	}
}

int	main(int argc, char **argv)
{
	std::fstream	file;
	std::fstream	replace;
	std::string		replace_name;

	if (argc != 4)
		return (exit_fail(NULL, "Arguments error"));
	file.open(argv[1], std::fstream::in);
	if (file.is_open() == false)
		return (exit_fail(&file, "Can't open file"));
	replace_name = std::string(argv[1]) + std::string(".replace");
	replace.open(replace_name.c_str(), std::fstream::out | std::fstream::trunc);
	if (replace.is_open() == false)
		return (exit_fail(&file, "Can't open .replace file"));
	replace_file(file, replace, std::string(argv[2]), std::string(argv[3]));
	file.close();
	replace.close();
	return (0);
}
