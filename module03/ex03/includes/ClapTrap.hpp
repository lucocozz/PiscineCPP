/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:44:38 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/20 16:41:06 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &copy);
	virtual ~ClapTrap();
	ClapTrap				&operator=(ClapTrap &claptrap);
	virtual std::string		getName(void) const;
	int						getAttackDamage(void) const;
	int						getEnergyPoints(void) const;
	int						getHitPoints(void) const;
	virtual void			attack(std::string const &target);
	void 					takeDamage(unsigned int amount);
	void 					beRepaired(unsigned int amount);
};

std::ostream	&operator<<(std::ostream &out, ClapTrap const &claptrap);
