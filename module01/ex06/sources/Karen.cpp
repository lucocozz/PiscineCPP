/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 02:02:03 by lucocozz          #+#    #+#             */
/*   Updated: 2021/10/28 23:54:13 by lucocozz         ###   ########.fr       */
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

void Karen::complain(std::string level)
{
	int	i;
	std::string	strs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i < 4 && strs[i].compare(level) != 0)
		i++;
	switch (i)
	{
		case 0:
			std::cout << "[DEBUG]" << std::endl;
			this->debug();
		case 1:
			std::cout << "[INFO]" << std::endl;
			this->info();
		case 2:
			std::cout << "[WARNING]" << std::endl;
			this->warning();
		case 3:
			std::cout << "[ERROR]" << std::endl;
			this->error();
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems]" << std::endl;
			break;
	}
}
