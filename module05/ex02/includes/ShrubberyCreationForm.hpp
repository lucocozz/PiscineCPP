/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:15:17 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/22 21:51:50 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	virtual ~ShrubberyCreationForm() {};
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &object);
	virtual void			execute(Bureaucrat const &executor) const;
	void					executeForm(Bureaucrat const &target) const;
};
