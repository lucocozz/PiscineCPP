/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 22:20:03 by lucocozz          #+#    #+#             */
/*   Updated: 2021/10/30 01:24:21 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
private:
	int					_rawBits;
	static const int	_radixPoint = 8;
public:
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed	&operator=(const Fixed &object);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
