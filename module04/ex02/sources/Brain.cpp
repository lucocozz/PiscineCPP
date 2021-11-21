/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:32:39 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/21 17:06:20 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor Brain" << std::endl;
}

Brain::Brain(Brain &copy)
{
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Deconstructor Brain" << std::endl;
}

Brain	&Brain::operator=(Brain &brain)
{
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = brain._ideas[i];
	return (*this);
}
