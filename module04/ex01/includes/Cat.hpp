/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:51:57 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/06 16:46:58 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain	*brain;
public:
	Cat();
	Cat(Cat &copy);
	virtual ~Cat();
	Cat				&operator=(Cat const &cat);
	virtual void	makeSound(void) const;
};

#endif
