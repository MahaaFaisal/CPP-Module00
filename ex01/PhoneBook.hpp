/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:08:19 by mafaisal          #+#    #+#             */
/*   Updated: 2024/08/25 11:29:41 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "helpers.hpp"
# include <iostream>

class PhoneBook
{
	private:
		int		isFull;
		int		current;
		Contact book[8];
		/*
		 You should be able to use each of your headers independently from others.
		 Thus, they must include all the dependencies they need. 
		 However, you must avoid the problem of double inclusion by adding include guards.
		 Otherwise, your grade will be 0.
		*/
	public:
		PhoneBook(void);

		int		addContact();
		int	getIndex(int index);
		void	displayContact();
		int	displayIndexContact();
		void	displayPhoneBook();

		~PhoneBook(void);
};

#endif