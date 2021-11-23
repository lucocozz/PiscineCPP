/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:47:16 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/23 20:43:36 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Form.hpp"

class Intern
{
public:
	Intern() {};
	Intern(const Intern &copy);
	~Intern() {};
	Intern	&operator=(const Intern &object);
	Form	*makeForm(std::string name, std::string target);
};
