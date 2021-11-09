/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:53:20 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/09 20:52:53 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "AMateria.hpp"
# include "Character.hpp"

class Cure: public AMateria
{
public:
	Cure();
	Cure(Cure const &copy);
	virtual ~Cure();
	Cure					&operator=(Cure const &cure);
	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);
};
