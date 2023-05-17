/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:39:46 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/03 14:39:46 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
public:
	ClapTrap();
	ClapTrap( const ClapTrap &obj );
	ClapTrap(std::string s);
	ClapTrap &operator=(const ClapTrap &rhs);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setAttackDamage(unsigned int amount);
	void setEnergyPoints(unsigned int amount);
	void setHitPoints(unsigned int amount);
};

#endif