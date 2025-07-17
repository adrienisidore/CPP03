/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:56:16 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/17 10:55:36 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called for " << this->_name << std::endl;
	this->_hitpoint = 100;
	this->_energypoint = 100;
	this->_attackdamage = 30;
}

FragTrap::FragTrap(std::string	name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called for " << this->_name << std::endl;
	this->_hitpoint = 100;
	this->_energypoint = 100;
	this->_attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called for hitpoint = "
	<< this->_hitpoint << " energypoint = "<< this->_energypoint << " attackdamage = "
	<< this->_attackdamage << std::endl; 
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap default destructor called for "
	<< this->_name << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs)
	{
		std::cout << "FragTrap assignment operator called" << std::endl;
		ClapTrap::operator=(rhs);
	}
	else
		std::cout << "Assignment operator called for the same instance" << std::endl;
	return (*this);
}

// void FragTrap::attack(const std::string& target)
// {
// 	if (this->_energypoint && this->_hitpoint)
// 	{
// 		std::cout << "FragTrap " << this->_name << " attacks " << target
// 		<< ", causing " << this->_attackdamage << " points of damage!" << std::endl;
// 		(this->_energypoint)--;
// 		return ;
// 	}
// 	std::cout << this->_name << " has no energy/hit point to attack" << std::endl;
// }

void FragTrap::highFivesGuys(void)
{
	std::cout << "Give me a high five!" << std::endl;
}