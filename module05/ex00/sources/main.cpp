/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:00:47 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/17 02:12:57 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try {
		Bureaucrat toto("toto", 42);
		std::cout << toto << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n" << std::endl;

	try {
		Bureaucrat titi("titi", -42);
		std::cout << titi << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n" << std::endl;

	try {
		Bureaucrat tata("tata", 4242);
		std::cout << tata << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n" << std::endl;

	try {
		Bureaucrat tutu("tutu", 2);
		std::cout << tutu << std::endl;
		tutu.increaseGrade();
		std::cout << tutu << std::endl;
		tutu.increaseGrade();
		std::cout << tutu << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n" << std::endl;

	try {
		Bureaucrat yolo("yolo", 149);
		std::cout << yolo << std::endl;
		yolo.decreaseGrade();
		std::cout << yolo << std::endl;
		yolo.decreaseGrade();
		std::cout << yolo << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
