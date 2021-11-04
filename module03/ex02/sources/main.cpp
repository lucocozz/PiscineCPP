/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:43:52 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/04 17:46:33 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int	main(void)
{
	ClapTrap tata("Tata");
	ScavTrap toto("Toto");
	FragTrap titi("titi");

	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	tata.beRepaired(10);
	toto.guardGate();
	titi.highFivesGuys();
	return (0);
}
