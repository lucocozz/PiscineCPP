/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:33:43 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/07 19:02:01 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria &copy);
	virtual ~AMateria();
	AMateria			&operator=(AMateria &amateria);
	std::string const	&getType(void) const;
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);
};
