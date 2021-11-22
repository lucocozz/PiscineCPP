/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 01:25:29 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/22 13:37:26 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade > LOWERGRADE)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < HIGHERGRADE)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy): _name(copy.getName()), _grade(copy.getGrade()) {}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat &bureaucrat)
{
	this->_grade = bureaucrat._grade;
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::increaseGrade(void)
{
	if (this->_grade - 1 < HIGHERGRADE)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decreaseGrade(void)
{
	if (this->_grade + 1 > LOWERGRADE)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form &object)
{
	try {
		object.beSigned(*this);
		std::cout << this->_name << " signs " << object.getName() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << this->_name << " cannot sign " << object.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}
