/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:06:40 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/10 00:42:49 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->_idx = 0;
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
	if (this->_idx == MATERIA_SIZE)
		this->_idx = 0;
	this->_materias[this->_idx] = materia;
	this->_idx++;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < MATERIA_SIZE; i++)
		if (this->_materias[i] != NULL && this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	return (NULL);
}
