/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 21:01:57 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/17 21:02:00 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
    return;
}
NinjaTrap::NinjaTrap(std::string name)
{
    this->_name = name;
    this->_type = "N1NJ-TP ";
    this->_hit_points = 60;
    this->_max_hit_points = 60;
    this->_energy_points = 100;
    this->_max_energy_points = 120;
    this->_level = 1;
    this->_melee_attack_damage = 60;
    this->_ranged_attack_damage = 5;
    this->_armor_damage_reduction = 0;
};
NinjaTrap::NinjaTrap(const NinjaTrap &Ninja)
{
    this->_name = Ninja._name;
    this->_type = "N1NJ-TP ";
    this->_hit_points = Ninja._hit_points;
    this->_max_hit_points = Ninja._max_hit_points;
    this->_energy_points = Ninja._energy_points;
    this->_max_energy_points = Ninja._max_energy_points;
    this->_level = Ninja._level;
    this->_melee_attack_damage = Ninja._melee_attack_damage;
    this->_ranged_attack_damage = Ninja._ranged_attack_damage;
    this->_armor_damage_reduction = Ninja._armor_damage_reduction;
};
NinjaTrap & NinjaTrap::operator = (const NinjaTrap &Ninja)
{
    this->_name = Ninja._name;
    this->_type = "N1NJ-TP ";
    this->_hit_points = Ninja._hit_points;
    this->_max_hit_points = Ninja._max_hit_points;
    this->_energy_points = Ninja._energy_points;
    this->_max_energy_points = Ninja._max_energy_points;
    this->_level = Ninja._level;
    this->_melee_attack_damage = Ninja._melee_attack_damage;
    this->_ranged_attack_damage = Ninja._ranged_attack_damage;
    this->_armor_damage_reduction = Ninja._armor_damage_reduction;
    return (*this);
};
NinjaTrap::~NinjaTrap(void)
{
    std::cout << _type << _name << " has died " << std::endl;
};



int NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
    int damage = randomizer(10, 50);
    std::cout << _type << _name << " used ninja shoebox on " << target._name << " what does this even mean?, it caused " << damage << " points of damage!" << std::endl;
    return (damage);
}
int NinjaTrap::ninjaShoebox(ClapTrap & target)
{
    int damage = randomizer(15, 55);
    std::cout << _type << _name << " used ninja shoebox on " << target._name << " it was super effective, it caused " << damage << " points of damage!" << std::endl;
    return (damage);
}
int NinjaTrap::ninjaShoebox(FragTrap & target)
{
    int damage = randomizer(25, 65);
    std::cout << _type << _name << " used ninja shoebox on " << target._name << " is super confused now, it caused " << damage << " points of damage!" << std::endl;
    return (damage);
}
int NinjaTrap::ninjaShoebox(ScavTrap & target)
{
    int damage = randomizer(35, 75);
    std::cout << _type << _name << " used ninja shoebox on " << target._name << " all sneaky sneaky like, it caused " << damage << " points of damage!" << std::endl;
    return (damage);
}