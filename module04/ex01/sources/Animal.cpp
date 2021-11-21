/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:39:10 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/21 17:03:29 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor animal" << std::endl;
}

Animal::Animal(Animal &copy)
{
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Destructor animal" << std::endl;
}

Animal	&Animal::operator=(Animal const &copy)
{
	this->_type = copy._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
}
