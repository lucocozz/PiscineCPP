/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:28:25 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/22 14:02:05 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec):
	_name(name),
	_gradeToSign(gradeToSign),
	_gradeToExec(gradeToExec)
{
	if (gradeToSign < HIGHERGRADE || gradeToExec < HIGHERGRADE)
		throw (Form::GradeTooHighException());
	else if (gradeToSign > LOWERGRADE || gradeToExec > LOWERGRADE)
		throw (Form::GradeTooLowException());
	this->_sign = false;
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
	if (this->_gradeToExec <= object.getGrade())
		if (this->_gradeToSign <= object.getGrade())
		{
			this->_sign = false;
			throw (Form::GradeTooLowException());
		}
	this->_sign = true;
}

std::ostream	&operator<<(std::ostream &out, Form &object)
{
	out << object.getName() << ", form grade " << object.getGradeToSign();
	return (out);
}
