/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:07:52 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/20 16:41:20 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &copy);
	virtual ~FragTrap();
	FragTrap	&operator=(FragTrap &fragtrap);
	void		highFivesGuys(void) const;
};

std::ostream	&operator<<(std::ostream &out, FragTrap const &fragtrap);

