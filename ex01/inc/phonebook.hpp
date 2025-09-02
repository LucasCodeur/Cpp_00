/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:11:52 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/02 15:07:25 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"

class Phonebook {
private:
	Contact	contacts[7];
	size_t			id;
public:
	void	add_contact() {
		
	}
	void	search_contact() {

	}
	void	exit_program() {

	}
	void set_index(size_t value) {
		id = value;
	}
	size_t	get_index(void) {
		return (this->id);	
	}
};

#endif
