/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 13:16:34 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/24 22:59:42 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "easyfind.hpp"

void
testValue(int val)
{
    std::list<int>    lst;

    lst.push_back(4);
    lst.push_back(8);
    lst.push_back(15);
    lst.push_back(16);
    lst.push_back(23);
    lst.push_back(42);

    std::cout << val << " -> ";
    try
    {
        easyfind <std::list<int> > (lst, val);
    }
    catch (std::string str)
    {
        std::cout << str << std::endl;
    }
}

int
main(void)
{
    testValue(1);
    testValue(4);
    testValue(16);
    testValue(29);
    testValue(42);
    return (0);
}
