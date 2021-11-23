/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:17:28 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/23 17:33:08 by lucocozz         ###   ########.fr       */
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
		if (this->getSign() != true)
			throw Form::FormNotSignedException();
		if (executor.getGrade() > this->getGradeToExec())
			throw Form::GradeTooLowException();
		this->executeForm(executor);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

static unsigned int	hash3(unsigned int h1, unsigned int h2, unsigned int h3)
{
    return ((((h1 * 2654435789U) + h2) * 2654435789U) + h3);
}

void	RobotomyRequestForm::executeForm(Bureaucrat const &target) const
{
	struct timeval time;

	gettimeofday(&time, NULL);
	srand(hash3(time.tv_sec, time.tv_usec, getpid()));

	std::cout << "*bzzz bzzz*" << std::endl;
	if (rand() % 2 == 0)
		std::cout << target.getName() << " has been robotomized." << std::endl;
	else
		std::cout << "failed to robotomized " << target.getName() << std::endl;
}
