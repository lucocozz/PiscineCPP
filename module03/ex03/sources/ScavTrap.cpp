/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:23:35 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/04 23:42:53 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Constructor ScavTrap" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor ScavTrap " << name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap " << this->getName() << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap &scavtrap)
{
	this->_name = scavtrap._name;
	this->_hitPoints = scavtrap._hitPoints;
	this->_energyPoints = scavtrap._energyPoints;
	this->_attackDamage = scavtrap._attackDamage;
	return (*this);
}

void	ScavTrap::guardGate(void) const
{
	std::cout << this->getName() << " have enterred in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, ScavTrap const &scavtrap)
{
	out << scavtrap.getName();
	return (out);
}
