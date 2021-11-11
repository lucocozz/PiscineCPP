/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:27:12 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/11 18:13:58 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::init(void)
{
	std::cout << " - First name: ";
	std::cin >> this->_first_name;
	std::cout << " - Last name: ";
	std::cin >> this->_last_name;
	std::cout << " - Nickname: ";
	std::cin >> this->_nickname;
	std::cout << " - Phone number: ";
	std::cin >> this->_phone_number;
	std::cout << " - Darkest secret: ";
	std::cin >> this->_darkest_secret;
}

void	Contact::display_attribute(int attribute, bool separator)
{
	std::cout << std::setw(10) << attribute;
	if (separator == true)
		std::cout << "|";
}

void	Contact::display_attribute(std::string attribute, bool separator)
{
	std::cout << std::setw(10);
	if (attribute.length() > 10)
		std::cout << attribute.substr(0, 9) + ".";
	else
		std::cout << attribute;
	if (separator == true)
		std::cout << "|";
}

void	Contact::display_column(int index)
{
	std::cout.setf(std::ios::right);
	display_attribute(index, true);
	display_attribute(this->_first_name, true);
	display_attribute(this->_last_name, true);
	display_attribute(this->_nickname, false);
	std::cout << std::endl;
	std::cout.unsetf(std::ios::left);
}

void	Contact::display(void)
{
	std::cout << " - First name: " << this->_first_name << std::endl;
	std::cout << " - Last name: " << this->_last_name << std::endl;
	std::cout << " - Nickname: " << this->_nickname << std::endl;
	std::cout << " - Phone number: " << this->_phone_number << std::endl;
	std::cout << " - Darkest secret: " << this->_darkest_secret << std::endl;
}
