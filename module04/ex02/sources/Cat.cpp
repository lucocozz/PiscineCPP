/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:54:27 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/23 14:29:29 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Constructor Cat" << std::endl;
}

Cat::Cat(Cat &copy): Animal(), _brain(NULL)
{
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat" << std::endl;
	delete this->_brain;
}

Cat	&Cat::operator=(Cat const &cat)
{
	this->_type = cat._type;
	if (this->_brain != NULL)
		delete this->_brain;
	this->_brain = new Brain(*cat._brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}
