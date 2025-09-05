/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:32:09 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/05 15:01:24 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
#include <string>

int	main ( void )
{
	Account account1(42);
	
	std::cout << account1.checkAmount() << std::endl;
	account1.makeDeposit(42);
	std::cout << account1.checkAmount() << std::endl;
	return (0);
}
