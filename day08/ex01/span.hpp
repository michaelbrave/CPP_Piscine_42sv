/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 22:16:56 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/24 22:16:57 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <climits>

class	Span
{
private:
	unsigned int 		_n;
	std::vector<int>	_arr;

public:
	Span(void);
	Span(unsigned int n);
	Span(const Span &cpy);
	~Span(void);
	Span& operator = (const Span &old);

	void			addNumber(int n);
	void			addRange(int a, int b);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
};

#endif
