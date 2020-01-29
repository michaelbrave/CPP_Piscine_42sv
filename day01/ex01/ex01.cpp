/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:37:50 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/14 15:37:52 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

void        memoryLeak()
{
    std::string*    panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}

int main()
{
    memoryLeak();
    return(0);
}