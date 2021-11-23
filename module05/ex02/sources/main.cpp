/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:00:47 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/23 16:53:15 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


int	main(void)
{
	Bureaucrat				titi("titi", 1);
	ShrubberyCreationForm	shrubberyForm("Shrubbery form");
	PresidentialPardonForm	presidentialForm("Presidential form");
	RobotomyRequestForm		robotomizeForm("Robotomize form");

	titi.executeForm(shrubberyForm);
	titi.signForm(shrubberyForm);
	titi.executeForm(shrubberyForm);
	std::cout << std::endl;

	titi.executeForm(presidentialForm);
	titi.signForm(presidentialForm);
	titi.executeForm(presidentialForm);
	std::cout << std::endl;

	titi.executeForm(robotomizeForm);
	titi.signForm(robotomizeForm);
	titi.executeForm(robotomizeForm);
	titi.executeForm(robotomizeForm);
	titi.executeForm(robotomizeForm);
	titi.executeForm(robotomizeForm);
	titi.executeForm(robotomizeForm);
	titi.executeForm(robotomizeForm);
	titi.executeForm(robotomizeForm);
	titi.executeForm(robotomizeForm);
	titi.executeForm(robotomizeForm);
	return (0);
}
