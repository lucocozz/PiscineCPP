/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:51:57 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/06 16:52:17 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain*	brain;
public:
	Dog();
	Dog(Dog &copy);
	virtual ~Dog();
	Dog				&operator=(Dog const &dog);
	virtual void	makeSound(void) const;
};

#endif