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

int main()
{
	unsigned int attack(4);
	ClapTrap denny("Denny");
	denny.setAttackDamage(attack);
	ClapTrap target("target");

	std::cout << "\nTest of copy constructor and copy assignement operator :\n" << std::endl;

	ClapTrap copy_test(target);
	copy_test.takeDamage(attack);
	copy_test = denny;
	copy_test.attack("something");

	std::cout << "\nTest of member functions attack, takeDammage and beRepaired :\n" << std::endl;

	for (int i(0) ; i < 3 ; i++)
	{
		std::cout << "\nNew turn\n" << std::endl;
		denny.attack("target");
		target.takeDamage(attack);
		target.beRepaired(1);
	}

	denny.setHitPoints(0);
	denny.attack("something");
	std::cout << "\nThe end of the program and the destructors are called :\n" << std::endl;
	return (0);
}