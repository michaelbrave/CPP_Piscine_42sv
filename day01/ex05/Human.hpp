/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:56:15 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/15 15:56:17 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
    private:
        Brain _humanBrain;
    public:
        Human(void);
		~Human(void);
        Brain &getBrain();
        std::string identify();
};

#endif