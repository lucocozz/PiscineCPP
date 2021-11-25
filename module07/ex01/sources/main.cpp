/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:05:14 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/25 20:26:49 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void	increase(int n)
{
	std::cout << n + 1 << " ";
}

void	toUpper(char c)
{
	std::cout << static_cast<char>(c - 32) << " ";
}

int	main(void)
{
	int		array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char	array2[] = {'a', 'b', 'c', 'd', 'e', 'f'};

	iter(array, 10, &increase);
	std::cout << std::endl;

	iter(array2, 6, &toUpper);
	std::cout << std::endl;
	return (0);
}
