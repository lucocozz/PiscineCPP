/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:07:52 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/04 17:44:47 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(FragTrap &copy);
	~FragTrap();
	FragTrap	&operator=(FragTrap &fragtrap);
	void		highFivesGuys(void) const;
};

std::ostream	&operator<<(std::ostream &out, FragTrap const &fragtrap);

