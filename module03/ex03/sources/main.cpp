/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:43:52 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/04 23:45:50 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap diamond("toto");

	diamond.whoAmI();
	diamond.attack("yolo");
	std::cout << diamond.getName() << " attack damage: " << diamond.getAttackDamage() << std::endl;
	std::cout << diamond.getName() << " energy points: " << diamond.getEnergyPoints() << std::endl;
	std::cout << diamond.getName() << " hit points: " << diamond.getHitPoints() << std::endl;
	return (0);
}
