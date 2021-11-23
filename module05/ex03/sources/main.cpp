/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:00:47 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/23 21:17:49 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		someRandomIntern;
	Bureaucrat	yolo("yolo", 1);
	Form		*rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	yolo.signForm(*rrf);
	yolo.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;


	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	yolo.signForm(*rrf);
	yolo.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	yolo.signForm(*rrf);
	yolo.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("sheeesh", "Bender");
	return (0);
}
