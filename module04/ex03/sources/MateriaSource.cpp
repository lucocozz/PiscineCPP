/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:06:40 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/16 20:33:04 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MATERIA_SIZE; i++)
		this->_materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MATERIA_SIZE; i++)
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (size_t i = 0; i < MATERIA_SIZE; i++)
	{
		if (this->_materias[i] != NULL)
		{
			this->_materias[i] = materia;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < MATERIA_SIZE; i++)
		if (this->_materias[i] != NULL && this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	return (NULL);
}
