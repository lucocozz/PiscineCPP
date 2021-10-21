/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 23:47:14 by lucocozz          #+#    #+#             */
/*   Updated: 2021/10/21 16:23:15 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_upper(const std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
		std::cout << static_cast<char>(toupper(str[i]));
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; argv[i] != NULL; i++)
			print_upper(std::string(argv[i]));
	std::cout << std::endl;
}
