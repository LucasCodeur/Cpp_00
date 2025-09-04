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
	std::string temp;

	if (argc > 1)
		return (1);
	(void)argv;
	phonebook.set_index(1);
	std::cout << "The program only accepts ADD, SEARCH and EXIT: " << std::endl;
	while (std::cin.eof() != true || str_is_print(temp) != false)
	{
		std::cin >> temp;
		if (temp == "ADD")
			phonebook.add();
		else if (temp == "SEARCH")
				phonebook.search();
		else if (temp == "EXIT")
			phonebook.exit_program();
		else
			std::cerr << "Error: " << "The program only accepts ADD, SEARCH and EXIT 👺: " << std::endl;

	}
	return (0);
}
