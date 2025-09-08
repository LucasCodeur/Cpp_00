/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:35:00 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/03 18:29:30 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

#include "PhoneBook.hpp"

int	main(int argc, char *argv[])
{
	PhoneBook	phonebook;

	std::string temp;
	if (argc > 1)
	{
		std::cout << "No argument to put\n";
		return (1);
	}
	(void)argv;
	while (1)
	{
		std::cout << "The program only accepts ADD, SEARCH and EXIT: \n";
		std::getline (std::cin,temp);
		if (std::cin.eof() == true || str_is_print(temp) == false)
			return (0);
		if (temp == "ADD")
		{
			if (phonebook.add() == false)
				return (0);
		}
		else if (temp == "SEARCH")
		{
			if (phonebook.search().get("first_name") == "EOF")
				return (0);
		}
		else if (temp == "EXIT")
		{
			std::cout << "Bye bye 🛸👽👾\n";
			return (0);
		}
		else
			continue ;
	}
	return (0);
}
