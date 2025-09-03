/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:11:52 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/03 17:43:46 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"

bool	str_is_print(std::string str);

class PhoneBook
{
	private:
		Contact	contact[8];
		size_t			i;
	public:
		void	set_index(size_t value);
		void	print_all();
		size_t	get_index(void); 
		bool	add_contact(Contact contact);
		Contact	search_contact(std::string id); 
};

#endif
