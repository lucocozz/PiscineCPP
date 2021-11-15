/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 22:19:39 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/16 00:24:49 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_rawBits = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::Fixed(int value)
{
	this->_rawBits = value << this->_radixPoint;
}

Fixed::Fixed(float value)
{
	this->_rawBits = roundf(value * (1 << this->_radixPoint));
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &object)
{
	this->_rawBits = object.getRawBits();
	return (*this);
}

Fixed	&Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	this->_rawBits++;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	this->_rawBits--;
	return (tmp);
}

int		Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_rawBits) / (1 << this->_radixPoint));
}

int		Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_radixPoint);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed		&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

bool	operator==(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() == b.getRawBits())
		return (true);
	return (false);
}

bool	operator!=(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() != b.getRawBits())
		return (true);
	return (false);
}

bool	operator>(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (true);
	return (false);
}

bool	operator<(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (true);
	return (false);
}

bool	operator>=(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (true);
	return (false);
}

bool	operator<=(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (true);
	return (false);
}

Fixed	operator+(Fixed const &a, Fixed const &b)
{
	Fixed	result(a.toFloat() + b.toFloat());

	return (result);
}

Fixed	operator-(Fixed const &a, Fixed const &b)
{
	Fixed	result(a.toFloat() - b.toFloat());

	return (result);
}

Fixed	operator*(Fixed const &a, Fixed const &b)
{
	Fixed	result(a.toFloat() * b.toFloat());

	return (result);
}

Fixed	operator/(Fixed const &a, Fixed const &b)
{
	Fixed	result(a.toFloat() / b.toFloat());

	return (result);
}
