/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:10:38 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/03 15:10:38 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "clapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap test1("Bob");
	ScavTrap test;
	test = test1;
	test.attack("Arnold");
	test.takeDamage(20);
	test.beRepaired(10);
	test.guardGate();

	return(0);
}