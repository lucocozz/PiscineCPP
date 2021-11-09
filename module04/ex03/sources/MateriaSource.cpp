/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:06:40 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/10 00:47:33 by lucocozz         ###   ########.fr       */
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
	if (this->_materias[this->_idx] != NULL)
		delete this->_materias[this->_idx];
	this->_materias[this->_idx] = materia;
	this->_idx++;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	AMateria	*tmp;

	for (int i = 0; i < MATERIA_SIZE; i++)
		if (this->_materias[i] != NULL && this->_materias[i]->getType() == type)
		{
			tmp = this->_materias[i]->clone();
			delete this->_materias[i];
			this->_materias[i] = NULL;
			return (tmp);
		}
	return (NULL);
}
