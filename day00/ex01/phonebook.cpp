/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrave <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:00:41 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/13 13:00:44 by mbrave           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string concat (std::string item)
{
	if (item.length() > 10)
	{
		item.resize(10);
		item[9] = '.';
	}
	return (item);
};

void PhoneBook::ADD ()
{
	if (contactNum > 8)
	{
		std::cout << "sorry this can only hold 8 contacts";
		return;
	}
	std::cout << std::endl << std::endl;
	std::cout << "please enter contact #" << contactNum << "'s first name:" << std::endl;
	std::getline (std::cin >> std::ws, people[contactNum].firstName);
	std::cout << "please enter contact #" << contactNum << "'s last name:" << std::endl;
	std::getline (std::cin >> std::ws, people[contactNum].lastName);
	std::cout << "please enter contact #" << contactNum << "'s nickname:" << std::endl;
	std::getline (std::cin >> std::ws, people[contactNum].nickname);
	std::cout << "please enter contact #" << contactNum << "'s login:" << std::endl;
	std::getline (std::cin >> std::ws, people[contactNum].login);
	std::cout << "please enter contact #" << contactNum << "'s postal address:" << std::endl;
	std::getline (std::cin >> std::ws, people[contactNum].address);
	std::cout << "please enter contact #" << contactNum << "'s email address:" << std::endl;
	std::getline (std::cin >> std::ws, people[contactNum].email);
	std::cout << "please enter contact #" << contactNum << "'s phone number:" << std::endl;
	std::getline (std::cin >> std::ws, people[contactNum].phone);
	std::cout << "please enter contact #" << contactNum << "'s birthday date:" << std::endl;
	std::getline (std::cin >> std::ws, people[contactNum].birthday);
	std::cout << "please enter contact #" << contactNum << "'s favorite meal:" << std::endl;
	std::getline (std::cin >> std::ws, people[contactNum].favoriteMeal);
	std::cout << "please enter contact #" << contactNum << "'s underwear color:" << std::endl;
	std::getline (std::cin >> std::ws, people[contactNum].underwearColor);
	std::cout << "please enter contact #" << contactNum << "'s darkest secret:" << std::endl;
	std::getline (std::cin >> std::ws, people[contactNum].darkestSecret);
	contactNum++;
};

int PhoneBook::BookInput()
{
	std::string input;
	int choice = 0;

	do
	{
		std::cout << std::endl << std::endl;
		std::cout << "please enter a number between 0 & " << contactNum << std::endl;
		std::cin >> input;
		choice = std::stoi(input);
	} while(choice < 0 || choice > contactNum);

	return (choice);
};

void PhoneBook::DisplayPeople(int choice)
{
	std::cout << std::endl << std::endl;
	std::cout << "First Name:" << people[choice].firstName << std::endl;
	std::cout << "Last Name:" << people[choice].lastName << std::endl;
	std::cout << "Nickname:" << people[choice].nickname << std::endl;
	std::cout << "Login:" << people[choice].login << std::endl;
	std::cout << "Address:" << people[choice].address << std::endl;
	std::cout << "Phone:" << people[choice].phone << std::endl;
	std::cout << "Birthday:" << people[choice].birthday << std::endl;
	std::cout << "Favorite Meal:" << people[choice].favoriteMeal << std::endl;
	std::cout << "Underwear Color:" << people[choice].underwearColor << std::endl;
	std::cout << "Darkest Secret:" << people[choice].darkestSecret << std::endl;
}

void PhoneBook::SEARCH ()
{
	int i = 0;
	int choice;

	std::cout << std::endl << std::endl;
	std::cout << "please select a contact by choosing typing the index number \n";
	std::cout
		<< std::right << std::setw(10) << "index" << " |"
		<< std::right << std::setw(10) << "first name" << " |"
		<< std::right << std::setw(10) << "last name" << " |"
		<< std::right << std::setw(10) << "nickname" << " |\n";

	while (i < contactNum)
	{
		std::cout
			<< std::setw(10) << i << " |"
			<< std::setw(10) << concat(people[i].firstName) << " |"
			<< std::setw(10) << concat(people[i].lastName) << " |"
			<< std::setw(10) << concat(people[i].nickname) << " |\n";
		i++;
	}
	choice = BookInput();
	DisplayPeople(choice);
};

int main ()
{
	std::string command;
	int cmd = 0;
	PhoneBook book;

	while (cmd != 2)
	{
		std::cout << std::endl << std::endl;
		std::cout << "Please enter a command - Your options are: \n";
		std::cout << "0 to ADD to make a new entry \n";
		std::cout << "1 to SEARCH to find an entry \n";
		std::cout << "and 2 EXIT to leave the program \n";
		std::cin >> command;
		cmd = std::stoi(command);
		if (cmd == 0)
			book.ADD();
		else if (cmd == 1)
			book.SEARCH();
		else if (cmd == 2)
			break;
	}
	return(0);
};


//look up try and catch blocks for error handling