/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:17:51 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/04 23:47:25 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name +  "_clap_name")
{
	std::cout << "Constructor DiamondTrap" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy)
{
	*this = copy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap &diamondtrap)
{
	this->_name = diamondtrap._name;
	this->_hitPoints = diamondtrap._hitPoints;
	this->_energyPoints = diamondtrap._energyPoints;
	this->_attackDamage = diamondtrap._attackDamage;
	return (*this);
}

std::string		DiamondTrap::getName(void) const
{
	return (this->_name);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "Hi ! I am " << this->_name << " and inherited from ClapTrap " << ClapTrap::getName() << std::endl;
}
