/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:33:36 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/30 00:36:37 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
		std::cout << std::endl;
	}

	{
		MutantStack<char>	stack2;
		stack2.push('o');
		stack2.push('l');
		stack2.push('o');
		stack2.push('y');
		MutantStack<char>::reverse_iterator it2 = stack2.rbegin();
		MutantStack<char>::reverse_iterator ite2 = stack2.rend();
		while (it2 != ite2)
		{
			std::cout << *it2;
			it2++;
		}
		std::cout << std::endl;
	}
	return (0);
}
