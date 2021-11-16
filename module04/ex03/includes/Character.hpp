/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:19:20 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/16 18:50:44 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "ICharacter.hpp"
# define INVENTORY_SIZE 4

class Character: public ICharacter
{
private:
	std::string	_name;
	AMateria	*_inventory[INVENTORY_SIZE];
public:
	Character();
	Character(Character &copy);
	Character(std::string name);
	virtual ~Character();
	Character	&operator=(Character &character);
	virtual std::string const &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
};
