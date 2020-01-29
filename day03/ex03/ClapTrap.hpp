/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 20:34:50 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/17 20:34:52 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <sstream>


class ClapTrap
{
	private:

	public:
    	int _max_hit_points;
		int _max_energy_points;
		int _level;
		int _melee_attack_damage;
		int _ranged_attack_damage;
		int _armor_damage_reduction;
        std::string _type;
		std::string _name;
		int _hit_points;
		int _energy_points;
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &Scav);
		ClapTrap & operator = (const ClapTrap &Scav);
		~ClapTrap(void);
		int rangedAttack(std::string const & target);
		int meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

void readyToRumble();
int randomizer (int i, int num);
#endif