/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:47:36 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/14 15:47:38 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
    _type = type;
};
Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* zombie = new Zombie;
    zombie->type = _type;
    zombie->name = name;
    return(zombie);
};
void ZombieEvent::randomChump()
{
    srand((unsigned) time(0));
    int ranName;
    int ranType;
    int num = 0;
    Zombie * clean;
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

//Zombie horde[10];

while (num < 10)
    {
        ranName = rand() % 62;
        ranType = rand() % 5;
        setZombieType(types[ranType]);
        clean = newZombie(names[ranName]); //but it returns a zombie? where?
        clean->announce();
        delete clean;
        num++;
        //horde[num].name = names[ranName];
        //horde[num].type = types[ranType];
        //horde[num].announce();
    }
};