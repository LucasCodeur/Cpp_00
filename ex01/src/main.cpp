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
		std::cout << "No argument to put" << std::endl;
		return (1);
	}
	(void)argv;
	while (1)
	{
		std::cout << "The program only accepts ADD, SEARCH and EXIT: " << std::endl;
		std::getline (std::cin,temp);
		if (std::cin.eof() == true || str_is_print(temp) == false)
			return (1);
		if (temp == "ADD")
			phonebook.add();
		else if (temp == "SEARCH")
				phonebook.search();
		else if (temp == "EXIT")
			phonebook.exit_program();
		else
			continue ;
	}
	return (0);
}
