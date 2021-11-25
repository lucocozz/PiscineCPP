/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:05:54 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/25 20:19:57 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

template<typename T>
void	iter(T array[], size_t len, void (*function)(T))
{
	for (size_t i = 0; i < len; i++)
		function(array[i]);
}
