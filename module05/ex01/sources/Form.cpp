/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:28:25 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/20 20:06:44 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < HIGHERGRADE)
		throw (Form::GradeTooHighException());
	else if (grade > LOWERGRADE)
		throw (Form::GradeTooLowException());
	this->_sign = false;
}

Form::Form(const Form &copy): _name(copy._name), _grade(copy._grade), _sign(copy._sign) {}

Form	&Form::operator=(const Form &)
{
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

int	Form::getGrade(void) const
{
	return (this->_grade);
}

bool	Form::getSign(void) const
{
	return (this->_sign);
}

void	Form::beSigned(Bureaucrat &object)
{
	if (this->_grade >= object.getGrade())
	{
		this->_sign = false;
		throw (Form::GradeTooLowException());
	}
	this->_sign = true;
	object.setGrade(this->_grade);
}

std::ostream	&operator<<(std::ostream &out, Form &object)
{
	out << object.getName() << ", form grade " << object.getGrade();
	return (out);
}
