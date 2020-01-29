/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:47:36 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/14 15:47:38 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N){
    _N = N;
    horde = new Zombie[N];
};

void ZombieHorde::announceHorde(){
    std::cout << "This is the Zombie Horde" << std::endl;
}

ZombieHorde::~ZombieHorde(){
    std::cout << "the zombies are all dropping dead" << std::endl;
    delete [] horde;
};