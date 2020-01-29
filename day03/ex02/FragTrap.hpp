/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:11:32 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/17 14:11:34 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		//int _max_hit_points;
		//int _max_energy_points;
		//int _level;
		//int _melee_attack_damage;
		//int _ranged_attack_damage;
		//int _armor_damage_reduction;
	public:
		//std::string _name;
		//int _hit_points;
		//int _energy_points;
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &Frag);
		FragTrap & operator = (const FragTrap &Frag);
		~FragTrap(void);
		//int rangedAttack(std::string const & target);
		//int meleeAttack(std::string const & target);
		//void takeDamage(unsigned int amount);
		//void beRepaired(unsigned int amount);

		int vaulthunter_dot_exe(std::string const & target);
		int specialAttack(std::string const & target);
		int kamehamehaAttack(std::string const & target);
		int frostBreathAttack(std::string const & target);
		int ultimateTechniqueAttack(std::string const & target);
		int oneThousandYearsOfDeathAttack(std::string const & target);
};

#endif
