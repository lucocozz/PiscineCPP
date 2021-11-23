/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:01:22 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/22 21:30:25 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>

# define LOWERGRADE 150
# define HIGHERGRADE 1

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat &copy);
	~Bureaucrat() {};
	Bureaucrat	&operator=(Bureaucrat &bureaucrat);
	std::string	getName(void) const;
	int			getGrade(void) const;
	void		increaseGrade(void);
	void		decreaseGrade(void);
	void		signForm(Form &form);
	void		executeForm(Form const &form);


	class GradeTooLowException: public std::exception
	{
	public:
		GradeTooLowException(void) throw() {};
		~GradeTooLowException() throw() {};
		virtual const char	*what(void) const throw() {
			return ("Exception: Grade too low");
		};
	};


	class GradeTooHighException: public std::exception
	{
	public:
		GradeTooHighException(void) throw() {};
		~GradeTooHighException() throw() {};
		virtual const char	*what(void) const throw() {
			return ("Exception: Grade too high");
		};
	};
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat &bureaucrat);
