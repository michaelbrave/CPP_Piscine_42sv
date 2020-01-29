/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 13:39:22 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/14 13:39:24 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap()
{
    Pony *tony = new Pony;
    std::cout << "\nthe Pony on the Heap is Tony\n";
    tony->head = "true";
    tony->ears = "true";
    tony->body = "true";
    tony->tail = "true";
    tony->legs = "true";
    tony->hooves = "true";
    std::cout << "Tony has all the working parts of a horse\n";
    tony->gallopSpeed = 10;
    std::cout << "a Gallop Speed of 10\n";
    tony->hunger = 0;
    std::cout << "a Hunger Level of 0\n";
    tony->cuteness = 10;
    std::cout << "and a cuteness Level of 10\n";
    delete tony;
    std::cout << "Tony has ran away due to the delete keyword\n";
}

void ponyOnTheStack()
{
    Pony anabelle;
    std::cout << "\nthe Pony on the Stack is Anabelle\n";
    anabelle.head = "true";
    anabelle.ears = "true";
    anabelle.body = "true";
    anabelle.tail = "true";
    anabelle.legs = "true";
    anabelle.hooves = "true";
    std::cout << "Anabelle has all the working parts of a horse\n";
    anabelle.gallopSpeed = 20;
    std::cout << "a Gallop Speed of 20\n";
    anabelle.hunger = 2;
    std::cout << "a Hunger Level of 2\n";
    anabelle.cuteness = 11;
    std::cout << "and a cuteness Level of 11\n";
    std::cout << "Say goodbey to Anabelle since the Stack is closing\n";
}