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
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap frag("FragTrap Bob");

	std::cout << "test copy :\n" << std::endl;

	FragTrap cpy1;
	cpy1.highFivesGuys();
	FragTrap cpy2(frag);
	cpy1 = cpy2;
	cpy1.highFivesGuys();
	cpy2.highFivesGuys();

	std::cout << "\ntest fragTrap members functions :\n" << std::endl;

	frag.attack("Arnold");
	frag.takeDamage(20);
	frag.beRepaired(10);
	frag.highFivesGuys();

	std::cout << "\ntest fragTrap out of energy or life :\n" << std::endl;

	frag.setHitPoints(0);
	frag.attack("void");

	frag.setHitPoints(10);
	frag.attack("void");

	frag.setEnergyPoints(1);
	frag.attack("void");
	frag.attack("void");

	std::cout << "\nThe end. Every destructors are called :\n" << std::endl;
	return(0);
}