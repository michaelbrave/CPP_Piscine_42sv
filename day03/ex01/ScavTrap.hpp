/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 19:22:38 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/17 19:22:41 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include "FragTrap.hpp"

class ScavTrap
{
	private:
		int _max_hit_points;
		int _max_energy_points;
		int _level;
		int _melee_attack_damage;
		int _ranged_attack_damage;
		int _armor_damage_reduction;
	public:
		std::string _name;
		int _hit_points;
		int _energy_points;
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &Scav);
		ScavTrap & operator = (const ScavTrap &Scav);
		~ScavTrap(void);
		int rangedAttack(std::string const & target);
		int meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int challengeNewcomer(std::string const & target);
		int bringUsAShrubberyChallenge(std::string const & target);
		int staringContestChallenge(std::string const & target);
		int catchSunlightChallenge(std::string const & target);
		int hairFlickChallenge(std::string const & target);
		int epicDanceOffChallenge(std::string const & target);
};

#endif