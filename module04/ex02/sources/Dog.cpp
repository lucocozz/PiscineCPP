/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:54:27 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/06 14:13:21 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Constructor Dog" << std::endl;
}

Dog::Dog(Dog &copy): Animal()
{
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=(Dog const &dog)
{
	this->type = dog.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Waf" << std::endl;
}
