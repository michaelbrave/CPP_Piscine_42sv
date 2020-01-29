/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:35:22 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/15 15:35:25 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

int main ()
{
    std::string words= "HI THIS IS BRAIN";
    std::string *ptr = &words;
    std::string& ref = words;

    std::cout << "this is the pointer: " << *ptr;
    std::cout << "\nthis is the reference: " << ref;
}