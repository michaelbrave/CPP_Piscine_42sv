/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 13:39:31 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/14 13:39:32 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Pony
{
    public:
        std::string head;
        std::string ears;
        std::string body;
        std::string tail;
        std::string legs;
        std::string hooves;
        int gallopSpeed;
        int hunger;
        int cuteness;
};

void ponyOnTheHeap();
void ponyOnTheStack();

#endif
