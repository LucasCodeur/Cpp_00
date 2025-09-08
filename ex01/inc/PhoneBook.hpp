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

#include "Contact.hpp"

bool	str_is_print(std::string str);

class PhoneBook
{
	private:
		size_t			i;
		Contact	contacts[8];
		size_t	get_index(void); 
		void	set_index(size_t value);
		void	print_all();
		void	add_contact(Contact contact);
		Contact	search_contact(); 

	public:
		PhoneBook(void);
		bool	add();
		Contact	search();
};

#endif
