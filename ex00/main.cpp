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
	unsigned int attack(2);
	ClapTrap test("Denny");
	ClapTrap target("target");

	test.setAttackDamage(attack);
	for (int i(0) ; i < 10 ; i++)
	{
		test.attack("target");
		target.takeDamage(attack);
		target.beRepaired(1);
	}
	return (0);
}