/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 09:48:12 by mafaisal          #+#    #+#             */
/*   Updated: 2024/08/18 15:19:31 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
		
	public:
		Contact(void);
		~Contact(void);

		int		setFirstName(std::string firstName);
		int		setLastName(std::string lastName);
		int		setNickName(std::string nickName);
		int		setPhoneNumber(std::string phoneNumber);
		int		setDarkestSecret(std::string darkestSecret);

		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		void		displayContact();
		
};

#endif