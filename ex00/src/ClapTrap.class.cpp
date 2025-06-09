/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:32:52 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/09 19:21:22 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(void) : _hitpoint(10), _energypoint(10), _attackdamage(10)
{
	std::cout << "Fixed default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _hitpoint(copy._hitpoint), _energypoint(copy._energypoint), _attackdamage(copy._attackdamage)
{
	std::cout << "ClapTrap copy constructor called for hitpoint = " << copy._hitpoint << " energypoint = "<< copy._energypoint << " attackdamage = "<< copy._attackdamage << std::endl; 
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap default destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		//Correct ? String peut se transmettre sans compromettre les futurs valeurs de rhs._name ?
		this->_name = rhs._name;
		this->_hitpoint = rhs._hitpoint;
		this->_energypoint = rhs._energypoint;
		this->_attackdamage = rhs._attackdamage;
	}
	else
		std::cout << "Assignment operator called for the same instance" << std::endl;
	return (*this);
}

// Of course, ClapTrap can’t do anything if it has no hit points or energy points left.
void ClapTrap::attack(const std::string& target)
{
	if (this->_energypoint)
	{
		std::cout << "ClapTrap " << this->_name << "attacks " << target._name << ", causing " << this->_hitpoint << "points of damage!" << std::endl;
		(this->_energypoint)--;	
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	// if (this->_energypoint)
	// {
		std::cout << "ClapTrap " << this->_name << "lost " << amount << " points of damage!" << std::endl;
	// }
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energypoint)
	{
		std::cout << "ClapTrap " << this->_name << "gained " << amount << " points!" << std::endl;
		(this->_energypoint)--;
	}
}