/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:53:20 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/10 00:13:29 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "AMateria.hpp"
# include "Character.hpp"

class Ice: public AMateria
{
public:
	Ice();
	Ice(Ice const &copy);
	virtual ~Ice();
	Ice					&operator=(Ice const &ice);
	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);
};
