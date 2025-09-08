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

#include "PhoneBook.hpp"

static void	print_titles(void);

PhoneBook::PhoneBook(void)
{
	this->i = 0;
} 

void	PhoneBook::add()
{
	Contact		contact;

	if (this->get_index() == 8)
		this->set_index(0);
	contact.set_all_values(this->get_index());
	this->add_contact(contact);
}

void	PhoneBook::add_contact(Contact contact) 
{
	this->contacts[this->get_index()] = contact;
	this->i++;
}

void	PhoneBook::search()
{
	Contact		contact;

	this->print_all();
	contact = this->search_contact();
	if (contact.get("first_name") == "INVALID")
	{
		std::cout << "Error : out of range or wrong\n";
		return ;
	}
	contact.print_one_contact();
}

Contact	PhoneBook::search_contact() 
{
	std::string	temp;
	int			index;
	
	std::getline (std::cin,temp);
	if (std::cin.eof() == true)
		exit(0);
	index = atoi(temp.c_str()) - 1;
	if (errno == ERANGE)
	{
		std::cout << "OVERFLOW\n";
		return (Contact());
	}
	else if (index < 0 || index > 7)
		return (Contact());
	return (this->contacts[index]);
}

void	PhoneBook::exit_program() 
{
	std::cout << "Bye bye 🛸👽👾\n";
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
	std::cout << "-------------------------------------------\n";
	print_titles();
	for (size_t i = 0; i < 8; i++)
	{
		if (contacts[i].get("first_name") == "INVALID")
		{

			std::cout << "-------------------------------------------\n";
			return ;
		}
		else
			contacts[i].print_one_contact_search();
	}
	std::cout << "-------------------------------------------\n";
}

static void	print_titles(void)
{
	std::cout << "   Index  " << "|";
	std::cout << "First name" << "|";
	std::cout << " Last name" << "|" ;
	std::cout << " Nickname \n";
}
