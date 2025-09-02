/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:35:00 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/02 18:36:51 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
		if (temp == "ADD")
		{
			if (phonebook.get_index() == 7)
				phonebook.set_index(0);
			contact.set_all_values();
			phonebook.add_contact(contact);
			phonebook.set_index(phonebook.get_index() + 1);
		}
		else if (temp == "SEARCH")
		{
			std::cin >> temp;
			contact = phonebook.search_contact(temp);
			contact.print_first_name();	
		}
		else if (temp == "EXIT")
		{

		}
		else
			std::cerr << "Error: " << "The program only accepts ADD, SEARCH and EXIT: " << std::endl;
	}
	return (0);
}
