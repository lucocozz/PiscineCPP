/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:54:27 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/21 17:00:33 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "Constructor WrongCat" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &copy): WrongAnimal()
{
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &copy)
{
	this->_type = copy._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "yolo" << std::endl;
}
