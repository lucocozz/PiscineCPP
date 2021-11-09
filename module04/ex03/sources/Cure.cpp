/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:52:10 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/09 20:52:59 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(Cure const &copy)
{
	*this = copy;
}

Cure::~Cure()
{
}

Cure	&Cure::operator=(Cure const &cure)
{
	this->_type = cure._type;
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
}
