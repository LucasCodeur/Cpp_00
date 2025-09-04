/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:36:16 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/03 18:12:39 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cerrno>
#include <cstdlib>
#include <string>

#include "phonebook.hpp"
#include "contact.hpp"

bool	PhoneBook::add_contact(Contact contact) 
{
	this->contact[this->get_index() - 1] = contact;
	return (true);
}

void	PhoneBook::add()
{
	size_t		index;
	Contact		contact;

	index = this->get_index();
	if (index == 8)
		this->set_index(1);
	contact.set_all_values(index);
	this->add_contact(contact);
	this->set_index(this->get_index() + 1);
}

void	PhoneBook::search()
{
	Contact		contact;

	this->print_all();
	contact = this->search_contact();
	if (contact.get("first_name") == "INVALID")
	{
		std::cout << "Error : out of range or wrong" << std::endl;
		exit(1);
	}
	contact.print_one_contact();
}

Contact	PhoneBook::search_contact() 
{
	std::string	temp;
	int			index;
	
	std::cin >> temp;
	index = atoi(temp.c_str()) - 1;
	if (errno == ERANGE)
	{
		std::cout << "OVERFLOW\n" << std::endl;
		return (Contact());
	}
	else if (index < 0 || index > 8)
		return (Contact());
	return (this->contact[index]);
}

void	PhoneBook::exit_program() 
{
	std::cout << "Bye bye 🛸👽👾";
	exit(0);

}

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
	std::cout << "-------------------------------------------" << std::endl;
	for (size_t i = 0; i < 9; i++)
	{
		if (contact[i].get("first_name") == "INVALID")
			return ;
		else
			contact[i].print_one_contact_search();
	}
	std::cout << "-------------------------------------------" << std::endl;
}

