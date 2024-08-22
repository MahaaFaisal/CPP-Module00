/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:36:21 by mafaisal          #+#    #+#             */
/*   Updated: 2024/08/22 18:09:51 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : isFull(0), current(0)
{
	// std::cout << "PhoneBook constructor called\n";
	return ;
}

PhoneBook::~PhoneBook()
{
	// std::cout << "PhoneBook destructor called\n";
	return ;
}

int	PhoneBook::addContact()
{	
	std::string input;

	std::cout << "\nFirst name: ";
	if (std::cin >> input)
		return (1);
		
	book[current].setFirstName(input);

	std::cout << "\n Last name: ";
	if (std::cin >> input)
		return (1);
	book[current].setLastName(input);

	std::cout << "\nNickname: ";
	if (std::cin >> input)
		return (1);
	book[current].setNickName(input);

	std::cout << "\nphone Number: ";
	if (std::cin >> input)
		return (1);
	book[current].setPhoneNumber(input);

	std::cout << "\nDarkest Secret: ";
	if (std::cin >> input)
		return (1);
	book[current].setDarkestSecret(input);

	if (current + 1 == 8)
		this->isFull = 1;
	current = (current + 1) % 8;
	return (0);
}

int	PhoneBook::getIndex(int index)
{
	if (current > index || isFull)
		return (index);
	return (-1); 
}

int	PhoneBook::displayIndexContact()
{
	int index;

	this->displayPhoneBook();
	std::cout << "\nContact Index: ";
	if (std::cin >> index)
	{
		std::cout << "Nothing was entered\n";
		return ;
	}
		return (1);

	
	int	contactIndex = getIndex(index);
	if (contactIndex < 0)
	{
		std::cout << "Contact does not exist\n";
		return ;
	}
	book[index].displayContact();
}

void	PhoneBook::displayPhoneBook()
{
	int	last;

	if (isFull)
		last = 8;
	else
		last = current;
	std::cout << "----------------------------------------------------------------\n";
	std::cout << "|   index   | firstname | lastname  | nickaname |\n";
	for (int i = 0; i < last; i++)
	{
		std::cout << "|    " << i << "    |    " << book[i].getFirstName() << "    |    " << book[i].getLastName() << "    |    " << book[i].getNickName() << std::endl;
	}
}