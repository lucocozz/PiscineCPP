/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:38:45 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/25 19:55:56 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T a, T b)
{
	if (a == b)
		return (b);
	else if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T	max(T a, T b)
{
	if (a == b)
		return (b);
	else if (a > b)
		return (a);
	else
		return (b);
}
