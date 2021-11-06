/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:21:06 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/06 17:04:50 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(Animal &copy);
	virtual ~Animal();
	Animal			&operator=(Animal const &copy);
	std::string		getType(void) const;
	virtual void	makeSound(void) const;
};

#endif
