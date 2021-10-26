/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:58:44 by lucocozz          #+#    #+#             */
/*   Updated: 2021/10/25 20:09:07 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	get_command(void)
{
	std::string	command;

	std::cout << "What you want?: ";
	std::cin >> command;
	return (command);
}

void	add_contact(Contact contacts[], int *index)
{
	if (*index < MAX_CONTACTS)
	{
		contacts[*index].init();
		*index += 1;
	}
	else
		std::cout << "No more place in contacts list." << std::endl;
}

void	search_contact(Contact contacts[], int size)
{
	int	index;

	if (size > 0)
	{
		for (int i = 0; i < size; i++)
			contacts[i].display_column(i);
		while (true)
		{
			std::cout << "Choose contact index: ";
			std::cin >> index;
			if (std::cin.fail() == true)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else if (index >= 0 && index < size)
			{
				contacts[index].display();
				break;
			}
			std::cout << "Not a valid index." << std::endl;
		}
	}
	else
		std::cout << "No contact register." << std::endl;
}

void	phonebook(void)
{
	int			size;
	std::string	command;
	Contact		contacts[MAX_CONTACTS];

	size = 0;
	while (true)
	{
		command = get_command();
		if (std::cin.eof() == true || command.compare("EXIT") == 0)
			break;
		else if (command.compare("ADD") == 0)
			add_contact(contacts, &size);
		else if (command.compare("SEARCH") == 0)
			search_contact(contacts, size);
		else
			std::cout << command << " is a invalide command, type: ADD, SEARCH, EXIT." << std::endl;
	}
	if (std::cin.eof() == true)
		std::cout << std::endl;
}

int	main(void)
{
	phonebook();
	return (0);
}
