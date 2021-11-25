/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:32:09 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/25 22:35:27 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <exception>

template<typename T>
class Array
{
private:
	T		*_array;
	int		_size;
public:
	Array();
	Array(unsigned int n);
	Array(const Array &copy);
	~Array();
	Array	&operator=(const Array &object);
	T		&operator[](int idx) const;
	int		getSize(void) const;


	class OutOfRangeException: public std::exception
	{
	public:
		OutOfRangeException(void) throw() {};
		~OutOfRangeException() throw() {};
		virtual const char	*what(void) const throw() {
			return ("Exception:OutOfRange");
		};
	};
};


template<typename T>
Array<T>::Array()
{
	this->_size = 0;
	this->_array = NULL;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->_size = n;
	this->_array = new T[n];
}

template<typename T>
Array<T>::Array(const Array<T> &copy)
{
	*this = copy;
}

template<typename T>
Array<T>::~Array()
{
	delete[] this->_array;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array<T> &object)
{
	this->_size = object._size;
	this->_array = new T[object._size];
	for (int i = 0; i < object._size; i++)
		this->_array[i] = object._array[i];
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](int idx) const
{
	if (!(idx >= 0 && idx < this->_size))
		throw (Array::OutOfRangeException());
	return (this->_array[idx]);
}

template<typename T>
int	Array<T>::getSize(void) const
{
	return (this->_size);
}
