/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:12:20 by mafaisal          #+#    #+#             */
/*   Updated: 2024/08/17 11:58:25 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

char *strToUpper(char *str)
{
	for (int i = 0; i < (int)strlen(str); i++)
	{
		str[i] = toupper(str[i]);
	}
	return str;
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
		std::cout << strToUpper(argv[i]);
	std::cout << std::endl;
}