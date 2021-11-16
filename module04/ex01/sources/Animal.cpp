/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:39:10 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/16 11:55:12 by lucocozz         ###   ########.fr       */
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
	this->type = copy.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
}
