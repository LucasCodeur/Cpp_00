/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:32:09 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/05 12:02:55 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
#include <string>

int	main ( void )
{
	Account account1(42);
	
	std::cout << account1.get("_amount") << std::endl;
	account1.makeDeposit(42);
	std::cout << account1.get("_amount") << std::endl;
	return (0);
}
