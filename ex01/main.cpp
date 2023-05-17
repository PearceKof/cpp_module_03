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

int	main(void)
{
	ScavTrap scav("scavtrap Bob");

	std::cout << "test copy:\n" << std::endl;
	ScavTrap cpy1("test");
	cpy1.guardGate();
	ScavTrap cpy2(scav);
	cpy1 = cpy2;
	cpy1.guardGate();
	cpy2.guardGate();

	std::cout << "\ntest ScavTrap members functions :\n" << std::endl;
	scav.attack("Arnold");
	scav.takeDamage(20);
	scav.beRepaired(10);
	scav.guardGate();

	std::cout << "\ntest ScavTrap out of enrgy or life :\n" << std::endl;
	scav.setHitPoints(0);
	scav.attack("void");
	scav.setHitPoints(10);
	std::cout << "\ntest ScavTrap setHitPoints to 10\n" << std::endl;
	scav.attack("void");
	scav.setEnergyPoints(1);
	std::cout << "\ntest ScavTrap setEnergyPoints to 10\n" << std::endl;
	scav.attack("void");
	scav.attack("void");
	std::cout << "\nThe end. Every destructors are called :\n" << std::endl;
	return(0);
}