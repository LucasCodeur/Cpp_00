/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:36:16 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/03 17:43:58 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cerrno>
#include <cstdlib>
#include <string>

#include "phonebook.hpp"

bool	PhoneBook::add_contact(Contact contact) 
{
	this->contact[this->get_index()] = contact;
	return (true);
}

Contact	PhoneBook::search_contact(std::string id) 
{
	int	index;
	
	index = atoi(id.c_str());
	if (errno == ERANGE)
	{
		std::cout << "OVERFLOW\n" << std::endl;
		return (Contact());
	}
	else if (index < 0 || index > 8)
		return (Contact());
	return (this->contact[index]);
}

// void	PhoneBook::exit_program() 
// {
//
// }

void PhoneBook::set_index(size_t value) 
{
	i = value;
}

size_t	PhoneBook::get_index(void) 
{
	return (this->i);	
}

void	PhoneBook::print_all()
{
	Contact	temp;
	
	for (size_t i = 0; i < 9; i++)
	{
		temp = contact[i];
		if (contact[i].get("first_name") == "INVALID")
		temp.print_one_contact_search();
	}
}

