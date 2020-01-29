/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:47:52 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/14 15:47:54 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string _type;
        Zombie *newZombie(std::string name);
    public:
        void setZombieType(std::string type);
        void randomChump();
};

#endif