/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:33:45 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/20 19:59:57 by lucocozz         ###   ########.fr       */
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
	const int			_grade;
	bool				_sign;
public:
	Form(std::string name, int grade);
	Form(const Form &copy);
	~Form() {};
	Form				&operator=(const Form &object);
	std::string			getName(void) const;
	int					getGrade(void) const;
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
