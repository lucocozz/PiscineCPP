/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:33:45 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/23 14:36:59 by lucocozz         ###   ########.fr       */
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
	virtual ~Form() {};
	Form			&operator=(const Form &object);
	std::string		getName(void) const;
	int				getGradeToSign(void) const;
	int				getGradeToExec(void) const;
	bool			getSign(void) const;
	void	beSigned(Bureaucrat &object);
	virtual void	execute(Bureaucrat const &executor) const;


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


	class FormNotSignedException: public std::exception
	{
	public:
		FormNotSignedException(void) throw() {};
		~FormNotSignedException() throw() {};
		virtual const char	*what(void) const throw() {
			return ("Exception:FormNotSigned");
		};
	};
};

std::ostream	&operator<<(std::ostream &out, Form &object);
