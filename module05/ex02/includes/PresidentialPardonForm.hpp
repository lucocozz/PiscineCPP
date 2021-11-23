/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:18:24 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/22 21:26:01 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	virtual ~PresidentialPardonForm() {};
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &object);
	virtual void			execute(Bureaucrat const &executor) const;
	void					executeForm(Bureaucrat const &target) const;
};
