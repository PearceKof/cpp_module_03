/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:21:00 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/03 16:21:00 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap : Default constructor called." << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string str): ClapTrap(str)
{
	std::cout << "ScavTrap : Sring constructor called." << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor called." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 and this->hitPoints > 0)
	{
		std::cout << "ScavTrap : " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
		std::cout << this->name << " now has " << this->hitPoints << " hit point and " << this->energyPoints << " energy points remaining." << std::endl;
	}
	else if (this->hitPoints == 0)
	{
		std::cout << "ScavTrap : " << this->name << " is dead and can't attack." << std::endl;
	}
	else if (this->energyPoints == 0)
	{
		std::cout << "ScavTrap : " << this->name << " doesn't have enough energy point to attack." << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	if (this->hitPoints > 0)
		std::cout << "ScavTrap : " << this->name << " entered on Gate keeper mode." << std::endl;
	else
		std::cout << "ScavTrap : " << this->name << "is dead and can't enter Gate Keeper mode." << std::endl;
}
