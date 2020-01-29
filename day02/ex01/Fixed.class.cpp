/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 10:09:35 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/16 10:09:38 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::lit8 = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    N = 0;
};

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed (const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->N = num << lit8;
};

Fixed::Fixed (const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->N = roundf(num * (1 << lit8));
};

Fixed::Fixed (const Fixed &old_obj)
{
    std::cout << "Copy constructor called" << std::endl;
    N = old_obj.N;
};

Fixed & Fixed::operator = (const Fixed &Fix )
{
    std::cout << "Assignation operator called" << std::endl;
    N = Fix.N;
    return *this;
};

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return N;
};

void Fixed::setRawBits(int const raw)
{
    //std::cout << "setRawBits member function called" << std::endl;
    N = raw;
};

float Fixed::toFloat( void ) const
{
    //std::cout << "toFloat member function called" << std::endl;
    return ((float) N / (1 << lit8));
};

int Fixed::toInt( void ) const
{
    //std::cout << "toInt member function called" << std::endl;
    return (N >> lit8);
};

std::ostream & operator << (std::ostream &out, Fixed const &in)
{
    //std::cout << "Operator called" << std::endl;
    out << in.toFloat();
    return (out);
};
