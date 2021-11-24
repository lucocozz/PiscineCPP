/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:15:30 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/24 18:35:05 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int	main(int argc, char **argv)
{
	ScalarConversion	expression;

	if (argc != 2)
	{
		std::cout << "Argument error" << std::endl;
		return (1);
	}
	expression = argv[1];
	expression.displayChar();
	expression.displayInt();
	expression.displayFloat();
	expression.displayDouble();
	return (0);
}
