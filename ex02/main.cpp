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
{
	std::cout << "test order constructor destructor :\n" << std::endl;
	FragTrap frag("Random fragtrap");
	std::cout << "\n" << std::endl;
}
{
	FragTrap frag("FragTrap Bob");

	std::cout << "test copy:\n" << std::endl;
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

	std::cout << "\ntest fragTrap out of enrgy or life :\n" << std::endl;
	frag.setHitPoints(0);
	frag.attack("void");
	frag.setHitPoints(10);
	std::cout << "\ntest fragTrap setHitPoints to 10\n" << std::endl;
	frag.attack("void");
	frag.setEnergyPoints(1);
	std::cout << "\ntest fragTrap setEnergyPoints to 10\n" << std::endl;
	frag.attack("void");
	frag.attack("void");
	std::cout << "\nThe end. Every destructors are called :\n" << std::endl;
	return(0);
}
}