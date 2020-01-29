/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:11:25 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/17 14:11:27 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

static const std::string nameList [62] =
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

void readyToRumble ()
{
    int i = 1;
    FragTrap clap1(nameList[randomizer(i++, 61)]);
    FragTrap clap2(nameList[randomizer(i++, 60)]);
    FragTrap clap3(nameList[randomizer(i++, 59)]);
    ScavTrap scav1(nameList[randomizer(i++, 58)]);
    ScavTrap scav2(nameList[randomizer(i++, 57)]);
    ScavTrap scav3(nameList[randomizer(i++, 56)]);
    NinjaTrap ninja1(nameList[randomizer(i++, 55)]);
    ClapTrap clap4(nameList[randomizer(i++, 54)]);
    while ((clap1._hit_points > 0 && clap2._hit_points > 0) && (clap1._energy_points > 0 && clap2._energy_points > 0))
    {
        clap2.takeDamage(clap1.meleeAttack(clap2._name));
        clap1.takeDamage(clap2.meleeAttack(clap1._name));
        clap2.takeDamage(clap1.rangedAttack(clap2._name));
        clap1.takeDamage(clap2.rangedAttack(clap1._name));

        clap2.takeDamage(clap1.vaulthunter_dot_exe(clap2._name));
        clap1.takeDamage(clap2.vaulthunter_dot_exe(clap1._name));
    }
    std::cout << std::endl;
    while ((scav1._hit_points > 0 && scav2._hit_points > 0) && (scav1._energy_points > 0 && scav2._energy_points > 0))
    {
        scav2.takeDamage(scav1.meleeAttack(scav2._name));
        scav1.takeDamage(scav2.meleeAttack(scav1._name));
        scav2.takeDamage(scav1.rangedAttack(scav2._name));
        scav1.takeDamage(scav2.rangedAttack(scav1._name));

        scav2.takeDamage(scav1.challengeNewcomer(scav2._name));
        scav1.takeDamage(scav2.challengeNewcomer(scav1._name));
    }
    std::cout << std::endl;
    while ((scav3._hit_points > 0 && clap3._hit_points > 0) && (scav3._energy_points > 0 && clap3._energy_points > 0))
    {
        scav3.takeDamage(clap3.meleeAttack(scav3._name));
        clap3.takeDamage(scav3.meleeAttack(clap3._name));
        scav3.takeDamage(clap3.rangedAttack(scav3._name));
        clap3.takeDamage(scav2.rangedAttack(clap3._name));

        scav2.takeDamage(clap3.vaulthunter_dot_exe(scav3._name));
        clap3.takeDamage(scav3.challengeNewcomer(clap3._name));
    }
    std::cout << std::endl;
    while ((ninja1._hit_points > 0 && clap4._hit_points > 0) && (ninja1._energy_points > 0 && clap4._energy_points > 0))
    {
        ninja1.takeDamage(clap4.meleeAttack(ninja1._name));
        clap4.takeDamage(ninja1.meleeAttack(clap4._name));
        ninja1.takeDamage(clap4.rangedAttack(ninja1._name));
        clap4.takeDamage(ninja1.rangedAttack(clap4._name));

        clap3.takeDamage(ninja1.ninjaShoebox(clap4));
    }
}

int main ()
{
    srand((unsigned) time(0));
    readyToRumble();
    return (0);
}
