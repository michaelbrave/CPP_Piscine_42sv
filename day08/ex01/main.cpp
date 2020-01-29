/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 22:16:40 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/24 22:16:42 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span	s(5);
	try
	{
		s.addNumber(1);
		s.addNumber(2);
		s.addNumber(3);
		s.addNumber(4);
		s.addNumber(5);
		std::cout << ("added 5 objects") <<std::endl;
		s.addNumber(6);
	}
	catch (std::exception &e) { std::cout <<(e.what()); }
	try
	{
		std::cout <<(s.shortestSpan()) <<std::endl;
		std::cout <<(s.longestSpan()) <<std::endl;
	}
	catch (std::exception &e) { std::cout <<(e.what()); }

	Span big(10000);
	try
	{
		big.addRange(0, 9999);
		std::cout <<(big.longestSpan()) <<std::endl;
	}
	catch (std::exception &e) { std::cout <<(e.what()); }

	return (0);
}
