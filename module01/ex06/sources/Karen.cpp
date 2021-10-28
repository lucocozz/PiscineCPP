/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 02:02:03 by lucocozz          #+#    #+#             */
/*   Updated: 2021/10/28 22:27:14 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"


Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

static int	hashString(std::string const str)
{
	int	hash = 0;
	int	magic_nb = 42;

	for (std::string::const_iterator i = str.begin(); i != str.end(); i++)
	{
		hash = hash ^ *i;
		hash *= magic_nb;
	}
	return (hash);
}

void Karen::complain(std::string level)
{
	switch (hashString(level))
	{
	case DEBUG:
		std::cout << "[DEBUG]" << std::endl;
		this->debug();
	case INFO:
		std::cout << "[INFO]" << std::endl;
		this->info();
	case WARNING:
		std::cout << "[WARNING]" << std::endl;
		this->warning();
	case ERROR:
		std::cout << "[ERROR]" << std::endl;
		this->error();
		break;
	default:
		std::cout << "[Probably complaining about insignificant problems]" << std::endl;
		break;
	}
}
