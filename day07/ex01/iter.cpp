/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 13:17:27 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/23 13:17:28 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>

template<typename I>
void	iter(I *adr, int len, void (*f)(I const &))
{
	for (int i = 0; i < len; i++)
		f(adr[i]);
}

template<typename U>
void	print(U const & x)
{
	std::cout << x << std::endl;
}

int	main()
{
	int lst[] = {1, 2, 3, 4, 5};
	iter <int> (lst, 5, print);
    
	std::string arr[] = {"hello", "there", "general", "kenobi"};
	iter <std::string> (arr, 4, print);
	return (0);
}