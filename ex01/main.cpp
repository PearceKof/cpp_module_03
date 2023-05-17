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

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap scav_bob("Bob");

	std::cout << "\ntest copy :\n" << std::endl;

	ScavTrap cpy1("test for cpy");
	cpy1.guardGate();
	ScavTrap cpy2(scav_bob);
	cpy1 = cpy2;
	cpy1.guardGate();
	cpy2.guardGate();

	std::cout << "\ntest ScavTrap members functions :\n" << std::endl;

	scav_bob.attack("Arnold");
	scav_bob.takeDamage(20);
	scav_bob.beRepaired(10);
	scav_bob.guardGate();

	std::cout << "\ntest ScavTrap out of energy or life :\n" << std::endl;

	scav_bob.setHitPoints(0);
	scav_bob.attack("void");

	scav_bob.setHitPoints(10);
	scav_bob.attack("void");

	scav_bob.setEnergyPoints(1);
	scav_bob.attack("void");
	scav_bob.attack("void");

	std::cout << "\nThe end. Every destructors are called :\n" << std::endl;
	return(0);
}