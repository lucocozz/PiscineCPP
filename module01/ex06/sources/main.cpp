/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 01:58:39 by lucocozz          #+#    #+#             */
/*   Updated: 2021/10/28 16:42:34 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	karen;

	if (argc == 2)
	{
		karen.complain(argv[1]);
		return (0);
	}
	std::cout << "Error arguments" << std::endl;
	return (1);
}
