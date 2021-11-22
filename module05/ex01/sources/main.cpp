/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:00:47 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/22 18:32:49 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "create form with value -4242, 4242" << std::endl;
	Form tutu("tutu", -4242, 4242);
	std::cout << std::endl;


	std::cout << "create form with value 42, 53" << std::endl;
	Form		toto("toto", 42, 53);
	Bureaucrat	titi("titi", 96);
	Bureaucrat	tata("tata", 21);


	std::cout << toto << std::endl;
	std::cout << titi << std::endl;
	titi.signForm(toto);
	std::cout << "form signed: " << toto.getSign() << std::endl;


	std::cout << std::endl;
	std::cout << toto << std::endl;
	std::cout << tata << std::endl;
	tata.signForm(toto);
	std::cout << "form signed: " << toto.getSign() << std::endl;
	return (0);
}
