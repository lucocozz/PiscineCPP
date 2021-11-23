/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:16:18 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/22 22:04:43 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form(copy.getName(), 145, 137) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &object)
{
	static_cast<void>(object);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try {
		if (executor.getGrade() > this->getGradeToExec())
			throw Form::GradeTooLowException();
		this->executeForm(executor);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void	ShrubberyCreationForm::executeForm(Bureaucrat const &target) const
{
	std::ofstream	file;
	std::string		filename = target.getName() + "_shrubbery";

	file.open(filename.c_str());
	if (file.is_open() == true)
	{
		file << "    		   ****		\
		     ********					\
		    **  ******					\
		     *   ******     ******		\
		         ******   *********		\
		          ****  *****   ***		\
		          ***  ***     **		\
		    *************       *		\
		  ******************			\
		 *****   H*****H*******			\
		 ***     H-___-H  *********		\
		  ***    H     H      *******	\
		   **    H-___-H        *****	\
		     *   H     H         ****	\
		         H     H         ***	\
		         H-___-H         **		\
		         H     H         *		\
		         H-___-H				\
										\
		         ALOHA!! " << std::endl;
		file.close();
	}
}
