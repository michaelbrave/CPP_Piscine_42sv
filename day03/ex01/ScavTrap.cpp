/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 19:22:31 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/17 19:22:32 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    return;
}
ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 100;
    this->_max_energy_points = 100;
    this->_level = 1;
    this->_melee_attack_damage = 30;
    this->_ranged_attack_damage = 20;
    this->_armor_damage_reduction = 5;
};
ScavTrap::ScavTrap(const ScavTrap &Scav)
{
    this->_name = Scav._name;
    this->_hit_points = Scav._hit_points;
    this->_max_hit_points = Scav._max_hit_points;
    this->_energy_points = Scav._energy_points;
    this->_max_energy_points = Scav._max_energy_points;
    this->_level = Scav._level;
    this->_melee_attack_damage = Scav._melee_attack_damage;
    this->_ranged_attack_damage = Scav._ranged_attack_damage;
    this->_armor_damage_reduction = Scav._armor_damage_reduction;
};
ScavTrap & ScavTrap::operator = (const ScavTrap &Scav)
{
    this->_name = Scav._name;
    this->_hit_points = Scav._hit_points;
    this->_max_hit_points = Scav._max_hit_points;
    this->_energy_points = Scav._energy_points;
    this->_max_energy_points = Scav._max_energy_points;
    this->_level = Scav._level;
    this->_melee_attack_damage = Scav._melee_attack_damage;
    this->_ranged_attack_damage = Scav._ranged_attack_damage;
    this->_armor_damage_reduction = Scav._armor_damage_reduction;
    return (*this);
};
ScavTrap::~ScavTrap(void)
{
    std::cout << "SC4V-JT " << _name << " has died " << std::endl;
};
int ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SC4V-JT " << _name << " attacks " << target << " by throwing a shoe, causing " << this->_ranged_attack_damage << " points of damage!" << std::endl;
    return (this->_ranged_attack_damage);
};
int ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "SC4V-JT " << _name << " attacks " << target << " with a wimpy slap, causing " << this->_melee_attack_damage << " points of damage!" << std::endl;
    return (this->_melee_attack_damage);
};
void ScavTrap::takeDamage(unsigned int amount)
{
    _hit_points = _hit_points - amount;
};
void ScavTrap::beRepaired(unsigned int amount)
{
    _hit_points = _hit_points + amount;
};



int ScavTrap::bringUsAShrubberyChallenge(std::string const & target)
{
    int damage = randomizer(5, 25);
    std::cout << "SC4V-JT " << _name << " challenges " << target << " to a bring us a shrubbery challenge, causing " << damage << " points of damage!" << std::endl;
    return (damage);
}
int ScavTrap::staringContestChallenge(std::string const & target)
{
    int damage = randomizer(7, 30);
    std::cout << "SC4V-JT " << _name << " challenges " << target << " to a  staring contest challenge attack, causing " << damage << " points of damage!" << std::endl;
    return (damage);
}
int ScavTrap::catchSunlightChallenge(std::string const & target)
{
    int damage = randomizer(8, 35);
    std::cout << "SC4V-JT " << _name << " challenges " << target << " to a  catch the sunlight challenge, causing " << damage << " points of damage!" << std::endl;
    return (damage);
}
int ScavTrap::hairFlickChallenge(std::string const & target)
{
    int damage = randomizer(10, 45);
    std::cout << "SC4V-JT " << _name << " challenges " << target << " to a  hair flick challenge, causing " << damage << " points of damage!" << std::endl;
    return (damage);
}
int ScavTrap::epicDanceOffChallenge(std::string const & target)
{
    int damage = randomizer(15, 55);
    std::cout << "SC4V-JT " << _name << " challenges " << target << " to a epic dance off challenge, causing " << damage << " points of damage!" << std::endl;
    return (damage);
}

int ScavTrap::challengeNewcomer(std::string const & target)
{
    int damage = 0;
    int attack = randomizer(1, 5);
    if (attack == 1)
        damage = bringUsAShrubberyChallenge(target);
    else if (attack == 2)
        damage = staringContestChallenge(target);
    else if (attack == 3)
        damage = catchSunlightChallenge(target);
    else if (attack == 4)
        damage = hairFlickChallenge(target);
    else if (attack == 5)
        damage = epicDanceOffChallenge(target);
    _energy_points = _energy_points - 25;
    return (damage);
}

