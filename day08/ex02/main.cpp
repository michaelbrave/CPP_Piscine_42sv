/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 22:35:08 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/24 22:35:09 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;

	mstack.pop();
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
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

	for (int i = 0;i < 100;i++)
		mstack.push(i);

	MutantStack<int>::iterator iter = mstack.begin();
	MutantStack<int>::iterator itere = mstack.end();

	while (iter != itere)
	{
		std::cout << *iter << std::endl;
		++iter;
	}

	std::stack<int> a(mstack);
	return (0);
}
