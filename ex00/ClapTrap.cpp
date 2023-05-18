/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:40:55 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/03 14:40:55 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Anonyme"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap : Default constructor called\n" << name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string s) : name(s), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap : String constructor called\n" << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) : name(obj.name), hitPoints(obj.hitPoints), energyPoints(obj.energyPoints), attackDamage(obj.attackDamage)
{
	std::cout << "ClapTrap : Copy constructor called\n" << name << " copied" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap : Copy assignement operator called." << std::endl;
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return(*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 and this->hitPoints > 0)
	{
		std::cout << "ClapTrap : " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
		std::cout << this->name << " now has " << this->hitPoints << " hit point and " << this->energyPoints << " energy points remaining." << std::endl;
	}
	else if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap : " << this->name << " is dead and can't attack." << std::endl;
	}
	else if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap : " << this->name << " doesn't have enough energy point to attack." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout << "ClapTrap : " << this->name << " takes " << amount << " points of damage!" << std::endl;
		if (this->hitPoints <= amount)
		{
			this->hitPoints = 0;
			std::cout  << this->name << " is dead :c but like for real." << std::endl;
		}
		else
		{
			this->hitPoints -= amount;
		}
		std::cout << this->name << " now has " << this->hitPoints << " hit point and " << this->energyPoints << " energy points remaining." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap : " << this->name << " takes damage but is already dead." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 and this->hitPoints > 0)
	{
		std::cout << "ClapTrap : " << this->name << " is repaired of " << amount << " hit points!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << "It now has " << this->hitPoints << " hit point and " << this->energyPoints << " energy points remaining" << std::endl;
	}
	else if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap : " << this->name << " is dead and can't be repaired." << std::endl;
	}
	else if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap : " << this->name << " doesn't have enough energy point to be repaired." << std::endl;
	}
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	this->attackDamage = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->energyPoints = amount;
}

void ClapTrap::setHitPoints(unsigned int amount)
{
	this->hitPoints = amount;
}