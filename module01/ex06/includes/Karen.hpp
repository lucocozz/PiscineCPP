/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 01:58:50 by lucocozz          #+#    #+#             */
/*   Updated: 2021/10/28 22:27:03 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

# define DEBUG 506807986
# define INFO 222088062
# define WARNING -995121386
# define ERROR 178579288

class Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	Karen();
	~Karen();
	void complain(std::string level);
};

typedef struct s_complain
{
	std::string	complain;
	void		(Karen::*function)(void);
}				t_complain;
