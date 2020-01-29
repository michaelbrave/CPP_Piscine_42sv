/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 20:34:40 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/17 20:34:41 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    return;
}
ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_type = "CL4P-TP ";
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 100;
    this->_max_energy_points = 100;
    this->_level = 1;
    this->_melee_attack_damage = 30;
    this->_ranged_attack_damage = 20;
    this->_armor_damage_reduction = 5;
};
ClapTrap::ClapTrap(const ClapTrap &Clap)
{
    this->_name = Clap._name;
    this->_type = "CL4P-TP ";
    this->_hit_points = Clap._hit_points;
    this->_max_hit_points = Clap._max_hit_points;
    this->_energy_points = Clap._energy_points;
    this->_max_energy_points = Clap._max_energy_points;
    this->_level = Clap._level;
    this->_melee_attack_damage = Clap._melee_attack_damage;
    this->_ranged_attack_damage = Clap._ranged_attack_damage;
    this->_armor_damage_reduction = Clap._armor_damage_reduction;
};
ClapTrap & ClapTrap::operator = (const ClapTrap &Clap)
{
    this->_name = Clap._name;
    this->_type = "CL4P-TP ";
    this->_hit_points = Clap._hit_points;
    this->_max_hit_points = Clap._max_hit_points;
    this->_energy_points = Clap._energy_points;
    this->_max_energy_points = Clap._max_energy_points;
    this->_level = Clap._level;
    this->_melee_attack_damage = Clap._melee_attack_damage;
    this->_ranged_attack_damage = Clap._ranged_attack_damage;
    this->_armor_damage_reduction = Clap._armor_damage_reduction;
    return (*this);
};
ClapTrap::~ClapTrap(void)
{
    std::cout << _type << _name << " has died " << std::endl;
};
int ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << _type << _name << " attacks " << target << " with ranged attack, causing " << this->_ranged_attack_damage << " points of damage!" << std::endl;
    return (this->_ranged_attack_damage);
};
int ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << _type << _name << " attacks " << target << " with melee attack, causing " << this->_melee_attack_damage << " points of damage!" << std::endl;
    return (this->_melee_attack_damage);
};
void ClapTrap::takeDamage(unsigned int amount)
{
    _hit_points = _hit_points - amount;
};
void ClapTrap::beRepaired(unsigned int amount)
{
    _hit_points = _hit_points + amount;
};

int randomizer (int i, int num)
{
    int ans = i + rand() % num;
    return (ans);
}
