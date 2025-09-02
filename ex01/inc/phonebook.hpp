/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:11:52 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/02 18:29:41 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"

#include <string>
#include <cstdlib>

class Phonebook 
{
	private:
		Contact	contact[7];
		size_t			id;
	public:
		bool	add_contact(Contact contact) 
		{
			this->contact[this->get_index()] = contact;
			return (true);
		}
		Contact	search_contact(std::string id) 
		{
			return (this->contact[atoi(id.c_str())]);
		}
		// void	exit_program() 
		// {
		//
		// }
		void set_index(size_t value) 
		{
			id = value;
		}
		size_t	get_index(void) 
		{
			return (this->id);	
		}
};

#endif
