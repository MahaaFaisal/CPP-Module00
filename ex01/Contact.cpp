/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:41:32 by mafaisal          #+#    #+#             */
/*   Updated: 2024/08/25 15:25:45 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// === Constructor and Destructor ===
Contact::Contact ()
{
	// std::cout << "Contact constructor called\n";
}

Contact::~Contact()
{
	// std::cout << "Contact destructor called\n";

}

// ======== Setters ========
int		Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
	return (0);
}

int		Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
	return (0);
}

int		Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
	return (0);
}

int		Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
	return (0);
}

int		Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
	return (0);
}

// ======== Getters ========
std::string	Contact::getFirstName()
{
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickName()
{
	return (this->nickName);
}

void		Contact::displayContact()
{
	std::cout << "Firstname     :" << this->firstName << std::endl;
	std::cout << "Lastname      :" << this->lastName << std::endl;
	std::cout << "Nickname      :"<< this->nickName << std::endl;
	std::cout << "Phone Number  :" << this->phoneNumber << std::endl;
	std::cout << "Darkest Secret:" << this->darkestSecret << std::endl;
}
