/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:06:17 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/25 18:30:47 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include "Base.hpp"

static unsigned int	hash3(unsigned int h1, unsigned int h2, unsigned int h3)
{
    return ((((h1 * 2654435789U) + h2) * 2654435789U) + h3);
}

static int	randRangeN(const int n)
{
	struct timeval time;

	gettimeofday(&time, NULL);
	srand(hash3(time.tv_sec, time.tv_usec, getpid()));
	return (rand() % n);
}

static Base *generate(void)
{
	switch (randRangeN(3))
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	default:
		return (NULL);
	}
}

static void	identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

static void	identify(Base &p)
{
	if (dynamic_cast<A*>(&p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p) != NULL)
		std::cout << "C" << std::endl;
}

int	main(void)
{
	Base	*ptr;

	ptr = generate();
	std::cout << "With ptr: ";
	identify(ptr);

	std::cout << "With ref: ";
	identify(*ptr);
	return (0);
}
