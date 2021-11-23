/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:54:27 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/23 14:33:32 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Constructor Dog" << std::endl;
}

Dog::Dog(Dog &copy): Animal(), _brain(NULL)
{
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;
	delete this->_brain;
}

Dog	&Dog::operator=(Dog const &dog)
{
	this->_type = dog._type;
	if (this->_brain != NULL)
		delete this->_brain;
	this->_brain = new Brain(*dog._brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Waf" << std::endl;
}
