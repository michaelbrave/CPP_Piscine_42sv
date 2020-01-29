/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 21:02:06 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/17 21:02:07 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
#define NINJA_TRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
	private:

	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &Ninja);
		NinjaTrap & operator = (const NinjaTrap &Ninja);
		~NinjaTrap(void);

		int ninjaShoebox(NinjaTrap & target);
        int ninjaShoebox(ClapTrap & target);
        int ninjaShoebox(FragTrap & target);
        int ninjaShoebox(ScavTrap & target);
};

#endif