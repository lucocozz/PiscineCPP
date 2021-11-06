/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:54:27 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/06 04:21:06 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Constructor Dog" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog &copy): Animal()
{
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;
}

Dog	&Dog::operator=(Dog const &copy)
{
	this->type = copy.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Waf" << std::endl;
}
