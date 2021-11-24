/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:18:19 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/24 19:15:09 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(): _value(0) {}

ScalarConversion::ScalarConversion(const char *str)
{
	this->_value = strtod(str, NULL);
}

ScalarConversion::ScalarConversion(const ScalarConversion &copy)
{
	*this = copy;
}

ScalarConversion	&ScalarConversion::operator=(const ScalarConversion &object)
{
	this->_value = object._value;
	return (*this);
}

ScalarConversion	&ScalarConversion::operator=(const char *str)
{
	this->_value = strtod(str, NULL);
	return (*this);
}

double	ScalarConversion::toDouble(void) const
{
	return (this->_value);
}

float	ScalarConversion::toFloat(void) const
{
	return (static_cast<float>(this->_value));
}

int	ScalarConversion::toInt(void) const
{
	return (static_cast<int>(this->_value));
}

char	ScalarConversion::toChar(void) const
{
	return (static_cast<char>(this->_value));	
}

void	ScalarConversion::displayDouble(void) const
{
		std::cout << "double: ";
	if (this->toDouble() == this->toInt())
		std::cout << this->toDouble() << ".0";
	else
		std::cout << this->toDouble();
	std::cout << std::endl;
}

void	ScalarConversion::displayFloat(void) const
{
	std::cout << "float: ";
	if (this->toFloat() == this->toInt())
		std::cout << this->toFloat() << ".0";
	else
		std::cout << this->toFloat();
	std::cout << "f" << std::endl;
}

void	ScalarConversion::displayInt(void) const
{
	std::cout << "int: ";
	if (std::isnan(this->_value) == true || std::isinf(this->_value) == true)
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->toInt() << std::endl;
}

void	ScalarConversion::displayChar(void) const
{
	std::cout << "char: ";
	if (std::isnan(this->_value) == true || std::isinf(this->_value) == true)
		std::cout << "impossible" << std::endl;
	else if (std::isprint(this->toChar()) == false)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << this->toChar() << "'" << std::endl;
}
