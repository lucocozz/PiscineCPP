/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:17:02 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/23 17:31:38 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdlib.h>
# include <time.h>
# include <sys/time.h>
# include <unistd.h>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	virtual ~RobotomyRequestForm() {};
	RobotomyRequestForm		&operator=(const RobotomyRequestForm &object);
	virtual void			execute(Bureaucrat const &executor) const;
	void					executeForm(Bureaucrat const &target) const;
};
