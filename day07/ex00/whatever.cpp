/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:58:52 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/23 11:58:54 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>

template<typename S>
void	swap(S &x, S &y)
{
	S z = x;
	x = y;
	y = z;
}

template<typename N>
N	const & min(N const & x, N const & y)
{
	return (x >= y ? y : x);
}

template<typename X>
X	const & max(X const & x, X const & y)
{
	return (x >= y ? x : y);
}

int	main()
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}