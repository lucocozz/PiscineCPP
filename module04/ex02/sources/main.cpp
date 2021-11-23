/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:46:47 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/23 13:52:35 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	// const Animal wild[100];
	const Animal *zoo[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
		std::cout << std::endl;
	}
	for (int i = 0; i < 4; i++)
	{
		delete zoo[i];
		std::cout << std::endl;
	}
	return (0);
}
