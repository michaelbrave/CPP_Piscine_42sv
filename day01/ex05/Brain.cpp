/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:56:41 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/15 15:56:43 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

Brain::Brain(void)
{
}

Brain::~Brain(void)
{
}

std::string    Brain::identify(void)
{
    std::ostringstream address;
    address << this;
    return (address.str());
}