/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:36:25 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/16 20:20:58 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "IMateriaSource.hpp"
# define MATERIA_SIZE 4

class MateriaSource: public IMateriaSource
{
private:
	AMateria	*_materias[MATERIA_SIZE];
public:
	MateriaSource();
	~MateriaSource();
	virtual void learnMateria(AMateria *materia);
	virtual AMateria *createMateria(std::string const &type);
};
