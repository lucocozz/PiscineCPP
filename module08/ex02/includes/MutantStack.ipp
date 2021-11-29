/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.ipp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:34:53 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/29 23:36:18 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy): std::stack<T>(copy)
{
	*this = copy;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &object)
{
	if (this == &object)
		this->c = object.c;
	return (*this);
}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rend(void)
{
	return (this->c.rend());
}

template<typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cbegin(void)
{
	return (this->c.cbegin());
}

template<typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cend(void)
{
	return (this->c.cend());
}

template<typename T>
typename std::stack<T>::container_type::const_reverse_iterator	MutantStack<T>::crbegin(void)
{
	return (this->c.crbegin());
}

template<typename T>
typename std::stack<T>::container_type::const_reverse_iterator	MutantStack<T>::crend(void)
{
	return (this->c.crend());
}
