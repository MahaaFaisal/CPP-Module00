/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 09:25:47 by mafaisal          #+#    #+#             */
/*   Updated: 2024/08/18 16:29:23 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string.h>

std::string Bold = "\e[1m";
std::string underlined = "\e[4m";
std::string Normal = "\e[0m";

int	main(void)
{
	PhoneBook	myBook;
	std::string	command;

	std::cout << Bold << "\n==== Welcome to my awesome PhoneBook ====\n\n" << Normal;
	std::cout << "ADD: if you want to add a contact, type ADD at the prompt\n";
	std::cout << "SEARCH: if you want to SEARCH a contact, type SEARCH at the prompt\n";
	std::cout << "EXIT: if you want to exit, type EXIT at the prompt\n";

	std::cout << underlined << Bold << "\nWhat do you need? " << Normal;
	std::cin >> command;

	while (1)
	{
		if (!command.compare("ADD"))
			myBook.addContact();
		else if (!command.compare("SEARCH"))
			myBook.displayIndexContact();
		else if (!command.compare("EXIT"))
			break;
		else
			std::cout << "Not a valid command\n";
		
		std::cout << underlined << Bold << "\nWhat do you need? 1.ADD 2.SEARCH 3.EXIT " << Normal;
		std::cin >> command;
	}
	std::cout << "BYE\n";
}