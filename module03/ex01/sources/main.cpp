/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:43:52 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/04 17:18:54 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap toto("Toto");
	ClapTrap tata("Tata");

	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	tata.beRepaired(10);
	toto.guardGate();
	return (0);
}
