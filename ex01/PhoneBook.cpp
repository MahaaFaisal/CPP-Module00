/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:36:21 by mafaisal          #+#    #+#             */
/*   Updated: 2024/08/25 15:45:08 by mafaisal         ###   ########.fr       */
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
	Contact	temp;

	std::cout << "\nFirst name: ";
	input = getUserInput();
	if (input.empty())
		return (1);
	temp.setFirstName(input);

	std::cout << "\n Last name: ";
	input = getUserInput();
	if (input.empty())
		return (1);
	temp.setLastName(input);

	std::cout << "\nNickname: ";
	input = getUserInput();
	if (input.empty())
		return (1);
	temp.setNickName(input);

	std::cout << "\nphone Number: ";
	input = getUserInput();
	if (input.empty())
		return (1);
	temp.setPhoneNumber(input);

	std::cout << "\nDarkest Secret: ";
	input = getUserInput();
	if (input.empty())
		return (1);
	temp.setDarkestSecret(input);

	book[current] = temp;
	if (current + 1 == 8)
		isFull = 1;
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
	char indexChar;
	int	index;

	displayPhoneBook();
	std::cout << "\nContact Index: ";
	if (!(std::cin >> indexChar) || indexChar == '\n')
			exit (0);
	index = indexChar - 48;
	int	contactIndex = getIndex(index - 1);
	if (contactIndex < 0)
	{
		std::cout << "Contact does not exist\n";
		return (1);
	}
	book[index - 1].displayContact();
	return (0);
}

void	PhoneBook::displayPhoneBook()
{
	int	last;
	std::string str;

	if (isFull)
		last = 8;
	else
		last = current;
	std::cout << "┌-----------------------------------------┐\n";
	std::cout << "|index| firstname | lastname  | nickaname |\n";
	std::cout << "+-----------------------------------------+\n";
	for (int i = 0; i < last; i++)
	{
		//cout temp[10] with values copied instead of cout the whole thing
		std::cout << "|  ";
		std::cout << i + 1;
		std::cout << "  | ";
		std::cout << resizedField(book[i].getFirstName());
		std::cout << "| ";
		std::cout << resizedField(book[i].getLastName());
		std::cout << "| ";
		std::cout << resizedField(book[i].getNickName());
		std::cout << "| ";
		std::cout << std::endl;
	}
	std::cout << "└-----------------------------------------┘\n";
}