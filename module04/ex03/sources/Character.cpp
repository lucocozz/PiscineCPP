/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:01:26 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/10 00:41:54 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name(""), _idx(0)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character &copy)
{
	*this = copy;
}

Character::Character(std::string name): _name(name), _idx(0)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->_inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
}

Character	&Character::operator=(Character &character)
{
	this->_name = character._name;
	for (int i = 0; i < INVENTORY_SIZE; i++)
			this->_inventory[i] = character._inventory[i];
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (this->_idx == INVENTORY_SIZE)
		this->_idx = 0;
	this->_inventory[this->_idx] = m;
	this->_idx++;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= INVENTORY_SIZE)
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}
