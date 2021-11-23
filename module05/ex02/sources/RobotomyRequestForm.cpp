/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:17:28 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/22 21:47:19 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form(copy.getName(), 72, 45) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &object)
{
	static_cast<void>(object);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try {
		if (executor.getGrade() > this->getGradeToExec())
			throw Form::GradeTooLowException();
		this->executeForm(executor);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void	RobotomyRequestForm::executeForm(Bureaucrat const &target) const
{
	int	value;

	srand(time(NULL));
	value = rand() % 10;
	std::cout << "*bzzz bzzz*" << std::endl;
	if (value % 2 == 0)
		std::cout << target.getName() << " has been robotomized." << std::endl;
	else
		std::cout << "failed to robotomized " << target.getName() << std::endl;
}
