/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:32:52 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/02 13:22:17 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name("Default"), _hitpoint(10), _energypoint(10), _attackdamage(0)
{
	std::cout << "ClapTrap default constructor called for "
	<< this->_name << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
	: _name(name), _hitpoint(10), _energypoint(10), _attackdamage(0)
{
	std::cout << "ClapTrap constructor called for "
	<< this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
	: _name(copy._name), _hitpoint(copy._hitpoint), _energypoint(copy._energypoint),
	_attackdamage(copy._attackdamage)
{
	std::cout << "ClapTrap copy constructor called, with hitpoint = "
	<< this->_hitpoint << " energypoint = "<< this->_energypoint
	<< " attackdamage = "<< this->_attackdamage << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap default destructor called for "
	<< this->_name << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		std::cout << "ClapTrap assignment operator called" << std::endl;
		this->_name = rhs._name;//copie profonde
		this->_hitpoint = rhs._hitpoint;
		this->_energypoint = rhs._energypoint;
		this->_attackdamage = rhs._attackdamage;
	}
	else
		std::cout << "Assignment operator called for the same instance" << std::endl;
	return (*this);
}

std::string ClapTrap::getname(void) const
{
	return (this->_name);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energypoint && this->_hitpoint)
	{
		std::cout << "ClapTrap " << this->_name << " attacks "
		<< target << ", causing " << this->_attackdamage
		<< " points of damage!" << std::endl;
		(this->_energypoint)--;
		return ;
	}
	std::cout << this->_name << " has no energy/hit point to attack"
	<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	// if (this->_hitpoint)
	if (this->_energypoint && this->_hitpoint)
	{
		std::cout << this->_name << " lost "
		<< amount << " points of damage!" << std::endl;
		this->_hitpoint -= amount;
		if (this->_hitpoint <= 0)
			std::cout << this->_name << " died" << std::endl;
		return ;
	}
	std::cout << this->_name
	<< " has no more energy/hit point to take damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energypoint && this->_hitpoint)
	{
		std::cout << this->_name << " gained "
		<< amount << " points!" << std::endl;
		(this->_energypoint)--;
		this->_hitpoint += amount;
		return ;
	}
	std::cout << this->_name
	<< " has no more energy/hit point to be repaired" << std::endl;
}
