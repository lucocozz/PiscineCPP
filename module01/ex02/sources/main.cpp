/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:21:25 by lucocozz          #+#    #+#             */
/*   Updated: 2021/10/27 16:13:23 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	stringPTR(std::string *str)
{
	std::cout << "PTR: " << str << std::endl;
	std::cout << "PTR string: " << *str << std::endl;
}

void	stringREF(std::string &str)
{
	std::cout << "REF: " << &str << std::endl;
	std::cout << "REF string: " << str << std::endl;
}

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	std::cout << "string: " << str << std::endl;
	std::cout << "ADDR: " << &str << std::endl;
	stringPTR(&str);
	stringREF(str);
	return (0);
}
