/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:35:47 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/25 14:27:14 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <stdint.h>

class Data
{
private:
	int	_value;
public:
	Data(): _value(0) {};
	Data(const Data &copy) {
		static_cast<void>(copy);
	};
	~Data() {};
	int		getValue(void) const {
		return (this->_value);
	};
	Data	&operator=(const int value) {
		this->_value = value;
		return (*this);
	};
};

std::ostream	&operator<<(std::ostream &out, Data *ptr)
{
	out << ptr->getValue();
	return (out);
}