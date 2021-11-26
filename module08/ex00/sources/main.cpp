/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:24:55 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/26 18:14:17 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <exception>
#include <list>
#include <iterator>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

template<typename T>
int	easyfind(T &container, int value)
{
	typename T::iterator it	= std::find(container.begin(), container.end(), value);

	if (it == container.end())
		throw (std::exception());
	return (*it);
}


int	main(void)
{
	int				value;
	std::list<int>	numbers;

	srand(time(NULL));
	for (size_t i = 0; i < 20; i++)
		numbers.push_back(rand() % 100);
	
	value = rand() % 100;
	for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;


	std::cout << value << " is in list ?: ";
	try {
		easyfind(numbers, value);
		std::cout << "yes" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
