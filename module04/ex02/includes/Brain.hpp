/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:21:02 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/21 17:05:56 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
protected:
	std::string	_ideas[100];
public:
	Brain();
	Brain(Brain &copy);
	~Brain();
	Brain	&operator=(Brain &brain);
};

#endif
