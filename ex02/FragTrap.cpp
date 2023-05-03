/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:58:45 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/03 17:58:45 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor called." << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string str): ClapTrap(str)
{
	std::cout << "FragTrap constructor called." << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 and this->hitPoints > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
		std::cout << this->name << " now has " << this->hitPoints << " hit point and " << this->energyPoints << " energy points remaining." << std::endl;
	}
	else if (this->hitPoints == 0)
	{
		std::cout << "FragTrap " << this->name << " is dead and can't attack." << std::endl;
	}
	else if (this->energyPoints == 0)
	{
		std::cout << "FragTrap " << this->name << " doesn't have enough energy point to attack." << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey :) High fives guys !" << std::endl;
}