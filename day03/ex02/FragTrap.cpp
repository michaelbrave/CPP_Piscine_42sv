/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:11:40 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/17 14:11:41 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    return;
}
FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    this->_type = "FR4G-TP ";
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 100;
    this->_max_energy_points = 100;
    this->_level = 1;
    this->_melee_attack_damage = 30;
    this->_ranged_attack_damage = 20;
    this->_armor_damage_reduction = 5;
};
FragTrap::FragTrap(const FragTrap &Frag)
{
    this->_name = Frag._name;
    this->_type = "FR4G-TP ";
    this->_hit_points = Frag._hit_points;
    this->_max_hit_points = Frag._max_hit_points;
    this->_energy_points = Frag._energy_points;
    this->_max_energy_points = Frag._max_energy_points;
    this->_level = Frag._level;
    this->_melee_attack_damage = Frag._melee_attack_damage;
    this->_ranged_attack_damage = Frag._ranged_attack_damage;
    this->_armor_damage_reduction = Frag._armor_damage_reduction;
};
FragTrap & FragTrap::operator = (const FragTrap &Frag)
{
    this->_name = Frag._name;
    this->_type = "FR4G-TP ";
    this->_hit_points = Frag._hit_points;
    this->_max_hit_points = Frag._max_hit_points;
    this->_energy_points = Frag._energy_points;
    this->_max_energy_points = Frag._max_energy_points;
    this->_level = Frag._level;
    this->_melee_attack_damage = Frag._melee_attack_damage;
    this->_ranged_attack_damage = Frag._ranged_attack_damage;
    this->_armor_damage_reduction = Frag._armor_damage_reduction;
    return (*this);
};
FragTrap::~FragTrap(void)
{
    std::cout << _type << _name << " has died " << std::endl;
};


int FragTrap::specialAttack(std::string const & target)
{
    int damage = randomizer(5, 25);
    std::cout << _type << _name << " attacks " << target << " with special attack, causing " << damage << " points of damage!" << std::endl;
    return (damage);
}
int FragTrap::kamehamehaAttack(std::string const & target)
{
    int damage = randomizer(7, 30);
    std::cout << _type << _name << " attacks " << target << " with kamehameha attack, causing " << damage << " points of damage!" << std::endl;
    return (damage);
}
int FragTrap::frostBreathAttack(std::string const & target)
{
    int damage = randomizer(8, 35);
    std::cout << _type << _name << " attacks " << target << " with frost breath attack, causing " << damage << " points of damage!" << std::endl;
    return (damage);
}
int FragTrap::ultimateTechniqueAttack(std::string const & target)
{
    int damage = randomizer(10, 45);
    std::cout << _type << _name << " attacks " << target << " with ultimate technique attack, causing " << damage << " points of damage!" << std::endl;
    return (damage);
}
int FragTrap::oneThousandYearsOfDeathAttack(std::string const & target)
{
    int damage = randomizer(15, 55);
    std::cout << _type << _name << " attacks " << target << " with one thousand years of death technique, causing " << damage << " points of damage!" << std::endl;
    return (damage);
}

int FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int damage = 0;
    int attack = randomizer(1, 5);
    if (attack == 1)
        damage = specialAttack(target);
    else if (attack == 2)
        damage = kamehamehaAttack(target);
    else if (attack == 3)
        damage = frostBreathAttack(target);
    else if (attack == 4)
        damage = ultimateTechniqueAttack(target);
    else if (attack == 5)
        damage = oneThousandYearsOfDeathAttack(target);
    _energy_points = _energy_points - 25;
    return (damage);
}
