/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:19:14 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/28 20:43:49 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <sys/time.h>
# include <stdlib.h>
# include <stdint.h>

class Span
{
private:
	unsigned int		_size;
	std::vector<int>	*_array;
public:
	Span(unsigned int N);
	Span(const Span &copy);
	~Span();
	Span	&operator=(const Span &object);
	int		shortestSpan(void);
	int		longestSpan(void);
	void	addNumber(int nb);
	void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);


	class ExistentValueException: public std::exception
	{
	public:
		ExistentValueException(void) throw() {};
		~ExistentValueException() throw() {};
		virtual const char	*what(void) const throw() {
			return ("Exception:ExistentValue");
		};
	};


	class TooShortException: public std::exception
	{
	public:
		TooShortException(void) throw() {};
		~TooShortException() throw() {};
		virtual const char	*what(void) const throw() {
			return ("Exception:TooShort");
		};
	};
};
