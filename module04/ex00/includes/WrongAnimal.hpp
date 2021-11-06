/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:21:06 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/06 05:16:41 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal &copy);
	virtual ~WrongAnimal();
	WrongAnimal		&operator=(WrongAnimal const &copy);
	std::string		getType(void) const;
	void			makeSound(void) const;
};
