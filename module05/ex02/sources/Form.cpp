/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:28:25 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/22 20:46:45 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec):
	_name(name),
	_gradeToSign(gradeToSign),
	_gradeToExec(gradeToExec)
{
	try {
		if (gradeToSign < HIGHERGRADE || gradeToExec < HIGHERGRADE)
			throw (Form::GradeTooHighException());
		else if (gradeToSign > LOWERGRADE || gradeToExec > LOWERGRADE)
			throw (Form::GradeTooLowException());
		this->_sign = false;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

Form::Form(const Form &copy):
	_name(copy._name),
	_gradeToSign(copy._gradeToSign),
	_gradeToExec(copy._gradeToExec)
{
}

Form	&Form::operator=(const Form &)
{
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

int	Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExec(void) const
{
	return (this->_gradeToExec);
}

bool	Form::getSign(void) const
{
	return (this->_sign);
}

void	Form::beSigned(Bureaucrat &object)
{
	try {
		if (object.getGrade() > this->_gradeToSign)
		{
			this->_sign = false;
			throw (Form::GradeTooLowException());
		}
		this->_sign = true;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void	Form::execute(Bureaucrat const &executor) const
{
	try {
		if (executor.getGrade() > this->_gradeToExec)
			throw Form::GradeTooLowException();
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, Form &object)
{
	out << object.getName() << ", form grade " << object.getGradeToSign();
	return (out);
}
