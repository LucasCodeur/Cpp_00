/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:35:00 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/03 15:26:33 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

#include "phonebook.hpp"

int	main(int argc, char *argv[])
{
	Phonebook	phonebook;
	Contact		contact;
	std::string temp;

	(void)argc;
	(void)argv;
	phonebook.set_index(0);
	while (1)
	{
		std::cout << "The program only accepts ADD, SEARCH and EXIT: " << std::endl;
		std::cin >> temp;
		if (std::cin.eof() == true || str_is_print(temp) == false)
			return (1);
		else if (temp == "ADD")
		{
			if (phonebook.get_index() == 8)
				phonebook.set_index(0);
			std::cout << phonebook.get_index() << std::endl;
			contact.set_all_values();
			phonebook.add_contact(contact);
			phonebook.set_index(phonebook.get_index() + 1);
		}
		else if (temp == "SEARCH")
		{
			std::cin >> temp;
			contact = phonebook.search_contact(temp);
			if (contact.get("first_name") == "INVALID")
				return (1);
			contact.print_all();
		}
		else if (temp == "EXIT")
		{

		}
		else
		{
			std::cerr << "Error: " << "The program only accepts ADD, SEARCH and EXIT: " << std::endl;
		}

	}
	return (0);
}
