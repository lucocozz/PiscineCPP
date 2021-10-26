/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:27:21 by lucocozz          #+#    #+#             */
/*   Updated: 2021/10/25 19:41:51 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "phonebook.hpp"

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
	void	display_attribute(std::string attribute, bool separator);
	void	display_attribute(int attribute, bool separator);
public:
	Contact();
	~Contact();
	void	init(void);
	void	display_column(int index);
	void	display(void);
};
