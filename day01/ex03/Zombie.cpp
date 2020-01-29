/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:47:03 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/14 15:47:05 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string names [62] =
    {"Acacius", "Akello", "Auberon", "Bas", "Basie",
    "Cabot", "Cadmus", "Cicero", "Digory", "Falconer",
    "Fenno", "Fitzroy", "Galway", "Gawain", "Gulliver",
    "Haldan", "Inigo", "Jaco", "Kasian", "Lev",
    "Lugh", "Merce", "Mingus", "Ngozi", "Osgood",
    "Pascoe", "Puck", "Quartz", "Roald", "Rodion",
    "Scorpio", "Septimus", "Taj", "Tarquin", "Umberto",
    "Whistler", "Yarrow", "Zesiro", "Amandine", "Branwen",
    "Calico", "Decima", "Endellion", "Faustine", "Hester",
    "Iseult", "Jocasta", "Kahlo", "Lileas", "Melisande",
    "Nephele", "Oberon", "Perdita", "Queralt", "Romola",
    "Sanne", "Thalassa", "Undine", "Venetia", "Winsome",
    "Yana", "Zephyrine"};
std::string types [5] =
    {"Walker Zombie", "Reanimated Zombie", "Flesh Eating Zombie", "Living Dead Zombie", "Infected Zombie"};

Zombie::Zombie()
{
    type = types[rand() % 5];
    name = names[rand() % 62];
    announce();
};

void Zombie::announce()
{
    std::cout << name << " " << type << " " << "Braiiiiiiinnnssss...\n";
};

