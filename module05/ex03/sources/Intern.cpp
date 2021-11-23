/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:06:06 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/23 21:02:34 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern	&Intern::operator=(const Intern &object)
{
	static_cast<void>(object);
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	int					i;
	const std::string	formList[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	i = 0;
	while (i < 3 && formList[i] != name)
		i++;
	if (i < 3)
		std::cout << "Intern creates " << name << std::endl;
	switch (i)
	{
	case 0:
		return (new PresidentialPardonForm(target));
	case 1:
		return (new RobotomyRequestForm(target));
	case 2:
		return (new ShrubberyCreationForm(target));
	default:
		std::cout << name << ": unrecognized form" << std::endl;
		return (NULL);
	}
}
