/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:46:47 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/06 17:28:14 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal *zoo[4];

	for (int i = 0; i < 4; i++)
		if (i < 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	for (int i = 0; i < 4; i++)
		delete zoo[i];
	return (0);
}
