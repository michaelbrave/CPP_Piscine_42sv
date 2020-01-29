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

const int Fixed::_lit8 = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    _N = 0;
};

Fixed::Fixed (const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_N = num << _lit8;
};

Fixed::Fixed (const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->_N = roundf(num * (1 << _lit8));
};

Fixed::Fixed (const Fixed &old_obj)
{
    std::cout << "Copy constructor called" << std::endl;
    _N = old_obj._N;
};

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
};

Fixed & Fixed::operator = (const Fixed &Fix )
{
    std::cout << "Assignation operator called" << std::endl;
    _N = Fix._N;
    return *this;
};

bool Fixed::operator > (Fixed const &ans) const
{
    return ((this->toFloat() > ans.toFloat()));
};

bool Fixed::operator < (Fixed const &ans) const
{
    return ((this->toFloat() < ans.toFloat()));
};

bool Fixed::operator >= (Fixed const &ans) const
{
    return ((this->toFloat() >= ans.toFloat()));
};

bool Fixed::operator <= (Fixed const &ans) const
{
    return ((this->toFloat() <= ans.toFloat()));
};

bool Fixed::operator == (Fixed const &ans) const
{
    return ((this->toFloat() == ans.toFloat()));
};

bool Fixed::operator != (Fixed const &ans) const
{
    return ((this->toFloat() != ans.toFloat()));
};

Fixed Fixed::operator + (Fixed const &ans)
{
    return (Fixed(this->toFloat() + ans.toFloat()));
};

Fixed Fixed::operator - (Fixed const &ans)
{
    return (Fixed(this->toFloat() - ans.toFloat()));
};

Fixed Fixed::operator * (Fixed const &ans)
{
    return (Fixed(this->toFloat() * ans.toFloat()));
};

Fixed Fixed::operator / (Fixed const &ans)
{
    return (Fixed(this->toFloat() / ans.toFloat()));
};


int Fixed::getRawBits(void) const
{
    return _N;
};

void Fixed::setRawBits(int const raw)
{
    _N = raw;
};

float Fixed::toFloat(void) const
{
    return ((float) _N / (1 << _lit8));
};

int Fixed::toInt( void ) const
{
    return (_N >> _lit8);
};


Fixed&	Fixed::operator ++(void)
{
    this->_N += 1;
    return(*this);
}
Fixed	Fixed::operator ++(int)
{
    Fixed tmp(*this);
	operator++();
	return tmp;
}
Fixed&	Fixed::operator --(void)
{
    this->_N -= 1;
    return(*this);
}
Fixed	Fixed::operator --(int)
{
    Fixed tmp(*this);
	operator--();
	return tmp;
}


Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

std::ostream & operator << (std::ostream &out, Fixed const &in)
{
    out << in.toFloat();
    return (out);
};