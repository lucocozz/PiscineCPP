/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:37:02 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/25 15:58:29 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data	*ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		*ptr = new Data();
	uintptr_t	raw;
	Data		*deserializedPtr = NULL;


	std::cout << "ptr value: " << ptr << std::endl;
	*ptr = 42;
	std::cout << "new ptr value: " << ptr << std::endl;
	std::cout << "ptr address: " << &ptr << std::endl;
	std::cout << std::endl;

	std::cout << "serialize data..." << std::endl;
	raw = serialize(ptr);
	std::cout << "raw data: " << raw << std::endl;
	std::cout << std::endl;

	std::cout << "deserialize data..." << std::endl;
	deserializedPtr = deserialize(raw);
	std::cout << "deserializedPtr value: " << deserializedPtr << std::endl;
	std::cout << "deserializedPtr address: " << &deserializedPtr << std::endl;

	delete ptr;
	// delete deserializedPtr; # abort because is se same ptr than "ptr" var
	return (0);
}
