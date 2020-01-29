/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:56:23 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/15 15:56:24 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void)
{
}

Human::~Human (void)
{
}

Brain &Human::getBrain()
{
    return this->_humanBrain;
}

std::string Human::identify()
{
    return (_humanBrain.identify());
}
