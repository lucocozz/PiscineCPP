/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:31:59 by lucocozz          #+#    #+#             */
/*   Updated: 2021/10/27 16:51:01 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		*_weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack(void);
};
