/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:47:52 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/14 15:47:54 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Zombie.hpp"


class ZombieHorde
{
    private:
        int _N;
        Zombie * horde;
    public:
        ZombieHorde(int N);
        void announceHorde();
        ~ZombieHorde();
};

void summonHorde ();

#endif