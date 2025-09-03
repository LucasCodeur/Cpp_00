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

#include "phonebook.hpp"

int	main(int argc, char *argv[])
{
	PhoneBook	phonebook;
	Contact		contact;
	std::string temp;
	size_t		index;

	if (argc > 1)
		return (1);
	(void)argv;
	phonebook.set_index(1);
	while (1)
	{
		std::cout << "The program only accepts ADD, SEARCH and EXIT: " << std::endl;
		std::cin >> temp;
		if (std::cin.eof() == true || str_is_print(temp) == false)
			return (1);
		else if (temp == "ADD")
		{
			index = phonebook.get_index();
			if (index == 8)
				phonebook.set_index(1);
			// TO TAKE OFF AT THE END
			std::cout << index << std::endl;
			contact.set_all_values(index);
			phonebook.add_contact(contact);
			phonebook.set_index(phonebook.get_index() + 1);
		}
		else if (temp == "SEARCH")
		{
			std::cout << "-------------------------------------" << std::endl;
			phonebook.print_all();
			std::cin >> temp;
			contact = phonebook.search_contact(temp);
			if (contact.get("first_name") == "INVALID")
			{
				std::cout << "Error : out of range or wrong" << std::endl;
				return (1);
			}
			contact.print_one_contact();
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
