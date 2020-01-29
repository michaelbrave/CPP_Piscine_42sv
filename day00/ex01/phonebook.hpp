/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:12:28 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/13 14:12:29 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Person
{
    public:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string login;
        std::string address;
        std::string email;
        std::string phone;
        std::string birthday;
        std::string favoriteMeal;
        std::string underwearColor;
        std::string darkestSecret;
};

class PhoneBook
{
    public:
        int contactNum;
        Person people [9];
        void SEARCH ();
        void ADD ();
    private:
        int BookInput ();
        void DisplayPeople(int choice);
};


#endif