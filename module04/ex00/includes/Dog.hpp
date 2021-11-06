/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:51:57 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/06 04:20:25 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog(Dog &copy);
	virtual ~Dog();
	Dog				&operator=(Dog const &copy);
	virtual void	makeSound(void) const;
};
