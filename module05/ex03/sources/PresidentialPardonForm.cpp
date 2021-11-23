/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:24:38 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/23 14:39:15 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form(copy.getName(), 25, 5) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &object)
{
	static_cast<void>(object);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
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

void	PresidentialPardonForm::executeForm(Bureaucrat const &target) const
{
	std::cout << target.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
