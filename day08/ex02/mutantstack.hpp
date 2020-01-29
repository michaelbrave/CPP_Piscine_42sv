/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 22:35:02 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/24 22:35:04 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <vector>
#include <iostream>

template <typename T>
class	MutantStack : public std::stack<T>
{
private:
	std::vector<T>	_mutant;
public:
	MutantStack(void) { }
	MutantStack(const MutantStack &cpy) { *this = cpy; }
	~MutantStack(void) { }
	MutantStack& operator = (const MutantStack &old)
	{
		_mutant = old._mutant;
		return (*this);
	}

	typedef typename std::vector<T>::iterator iterator;

	iterator	begin(void)	{ return (_mutant.begin()); }
	iterator	end(void)	{ return (_mutant.end()); }
	void		push(T x)	{ _mutant.push_back(x); }
	void		pop(void)	{ _mutant.pop_back(); }
	T			top(void)	{ return (*(_mutant.end() - 1)); }
};

#endif
