/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:28:22 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/04 23:35:57 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor ClapTrap " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap " << this->getName() << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap &claptrap)
{
	this->_name = claptrap._name;
	this->_hitPoints = claptrap._hitPoints;
	this->_energyPoints = claptrap._energyPoints;
	this->_attackDamage = claptrap._attackDamage;
	return (*this);
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int			ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

int			ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int			ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}


void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " loose " << amount << " energy points." << std::endl;
	this->_energyPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " regain " << amount << " energy points." << std::endl;
	this->_energyPoints += amount;
}

std::ostream	&operator<<(std::ostream &out, ClapTrap const &claptrap)
{
	out << claptrap.getName();
	return (out);
}
