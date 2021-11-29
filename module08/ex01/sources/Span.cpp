/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:27:57 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/28 21:36:31 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): _size(N)
{
	this->_array = new std::vector<int>[N];
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span()
{
	delete[] this->_array;
}

Span	&Span::operator=(const Span &object)
{
	if (this != &object)
	{
		delete this->_array;
		this->_size = object._size;
		this->_array = new std::vector<int>[object._size];
		this->_array->assign(object._array->begin(), object._array->end());
	}
	return (*this);
}

int		Span::shortestSpan(void)
{
	std::vector<int>	*sorted;
	int					span;
	int					shortest = INT32_MAX;

	if (this->_array->size() < 2)
		throw (Span::TooShortException());
	sorted = new std::vector<int>[this->_size];
	sorted->assign(this->_array->begin(), this->_array->end());
	std::sort(sorted->begin(), sorted->end());
	for (size_t i = 1; i < sorted->size(); i++)
	{
		span = std::abs(sorted->at(i - 1) - sorted->at(i));
		if (span < shortest)
			shortest = span;
	}
	delete[] sorted;
	return (shortest);
}

int		Span::longestSpan(void)
{
	std::vector<int>::iterator	max;
	std::vector<int>::iterator	min;

	if (this->_array->size() < 2)
		throw (Span::TooShortException());
	max = std::max_element(this->_array->begin(), this->_array->end());
	min = std::min_element(this->_array->begin(), this->_array->end());
	return (std::abs(*min - *max));
}

void	Span::addNumber(int nb)
{
	if (std::find(this->_array->begin(), this->_array->end(), nb) != this->_array->end())
		throw (Span::ExistentValueException());
	this->_array->push_back(nb);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	while (start != end)
	{
		this->addNumber(*start);
		start++;
	}
}