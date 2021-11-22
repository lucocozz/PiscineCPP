/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:33:45 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/22 13:59:16 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <exception>

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	const int			_gradeToSign;
	const int			_gradeToExec;
	bool				_sign;
public:
	Form(std::string name, int gradeToSign, int gradeToExec);
	Form(const Form &copy);
	~Form() {};
	Form				&operator=(const Form &object);
	std::string			getName(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToExec(void) const;
	bool				getSign(void) const;
	void				beSigned(Bureaucrat &object);


	class GradeTooLowException: public std::exception
	{
	public:
		GradeTooLowException(void) throw() {};
		~GradeTooLowException() throw() {};
		virtual const char	*what(void) const throw() {
			return ("Exception:GradeTooLow");
		};
	};


	class GradeTooHighException: public std::exception
	{
	public:
		GradeTooHighException(void) throw() {};
		~GradeTooHighException() throw() {};
		virtual const char	*what(void) const throw() {
			return ("Exception:GradeTooHigh");
		};
	};
};

std::ostream	&operator<<(std::ostream &out, Form &object);
