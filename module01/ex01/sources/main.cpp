/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:17:09 by lucocozz          #+#    #+#             */
/*   Updated: 2021/10/26 20:23:45 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	std::cout << "Creating horder of 15 zombies..." << std::endl;
	zombie = zombieHorde(15, "Toto");
	std::cout << "The leader of the horder say:" << std::endl;
	zombie->annonce();
	std::cout << "The order will be destroyed by a nuke bomb." << std::endl;
	delete[] zombie;
	return (0);
}
