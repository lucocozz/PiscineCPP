/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:23:35 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/20 16:39:17 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor FragTrap " << name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &copy)
{
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap " << this->getName() << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap &fragtrap)
{
	this->_name = fragtrap._name;
	this->_hitPoints = fragtrap._hitPoints;
	this->_energyPoints = fragtrap._energyPoints;
	this->_attackDamage = fragtrap._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "[" << this->getName() << "] Hive Fives!" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, FragTrap const &fragtrap)
{
	out << fragtrap.getName();
	return (out);
}
