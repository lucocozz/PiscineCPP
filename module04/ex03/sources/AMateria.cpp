/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:25:56 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/10 00:17:11 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type): _type(type)
{
}

AMateria::AMateria(AMateria &copy)
{
	*this = copy;
}

AMateria::~AMateria()
{
}

AMateria	&AMateria::operator=(AMateria &amateria)
{
	this->_type = amateria._type;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Materia use on " << target.getName() << std::endl;
}

