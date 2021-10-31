/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 22:20:03 by lucocozz          #+#    #+#             */
/*   Updated: 2021/10/31 02:42:12 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int					_rawBits;
	static const int	_radixPoint = 8;
public:
	Fixed();
	Fixed(int value);
	Fixed(float value);
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed		&operator=(const Fixed &object);
	Fixed		&operator++(void);
	Fixed		operator++(int);
	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat(void) const;
	int			toInt(void) const;
	static Fixed		&min(Fixed &a, Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static Fixed const	&min(Fixed const &a, Fixed const &b);
	static Fixed const	&max(Fixed const &a, Fixed const &b);

};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);
bool			operator==(Fixed const &a, Fixed const &b);
bool			operator!=(Fixed const &a, Fixed const &b);
bool			operator>(Fixed const &a, Fixed const &b);
bool			operator<(Fixed const &a, Fixed const &b);
bool			operator>=(Fixed const &a, Fixed const &b);
bool			operator<=(Fixed const &a, Fixed const &b);
Fixed			operator+(Fixed const &a, Fixed const &b);
Fixed			operator-(Fixed const &a, Fixed const &b);
Fixed			operator*(Fixed const &a, Fixed const &b);
Fixed			operator/(Fixed const &a, Fixed const &b);

#endif
