/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:34:09 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/29 23:36:15 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack();
	MutantStack(const MutantStack<T> &copy);
	~MutantStack();
	MutantStack<T>	&operator=(const MutantStack<T> &object);

	typedef typename std::stack<T>::container_type::iterator				iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
	typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator				begin(void);
	iterator				end(void);
	reverse_iterator		rbegin(void);
	reverse_iterator		rend(void);
	const_iterator			cbegin(void);
	const_iterator			cend(void);
	const_reverse_iterator	crbegin(void);
	const_reverse_iterator	crend(void);
};

# include "MutantStack.ipp"
