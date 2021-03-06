/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:07:52 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/20 16:41:26 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &copy);
	virtual ~ScavTrap();
	ScavTrap		&operator=(ScavTrap &scavtrap);
	void			guardGate(void) const;
	virtual void	attack(std::string const &target);
};

std::ostream	&operator<<(std::ostream &out, ScavTrap const &scavtrap);

