/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:14:43 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/24 18:34:37 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdlib.h>
# include <math.h>
# include <iomanip>

class ScalarConversion
{
private:
	double		_value;
public:
	ScalarConversion();
	ScalarConversion(const char *str);
	ScalarConversion(const ScalarConversion &copy);
	~ScalarConversion() {};
	ScalarConversion	&operator=(const ScalarConversion &object);
	ScalarConversion	&operator=(const char *str);
	double				toDouble(void) const;
	float				toFloat(void) const;
	int					toInt(void) const;
	char				toChar(void) const;
	void				displayDouble(void) const;
	void				displayFloat(void) const;
	void				displayInt(void) const;
	void				displayChar(void) const;
};
