/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:47:15 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/14 15:47:17 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>


class Zombie
{
    public:
        std::string type;
        std::string name;
        void announce()
        {
            std::cout << name << " " << type << " " << "Braiiiiiiinnnssss...\n";
        }
};

void zombieClass ();

#endif