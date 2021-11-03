/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:43:52 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/02 20:08:35 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap toto("Toto");
	ClapTrap tata("Tata");

	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	tata.beRepaired(0);
	return (0);
}
