/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:56:16 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/02 15:25:55 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ScavTrap.hpp"

//Appel au constructeur parent
ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called for " << this->_name << std::endl;
	this->_hitpoint = 100;
	this->_energypoint = 50;
	this->_attackdamage = 20;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called for " << this->_name << std::endl;
	//Modification des éléments "CLapTrap" de ScavTrap
	this->_hitpoint = 100;
	this->_energypoint = 50;
	this->_attackdamage = 20;
}

//Copie des éléments "ClapTrap" d'un ScavTrap à l'autre
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called for hitpoint = "
	<< this->_hitpoint << " energypoint = "
	<< this->_energypoint << " attackdamage = "
	<< this->_attackdamage << std::endl;  
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap default destructor called for "
	<< this->_name << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this != &rhs)
	{
		std::cout << "ScavTrap assignment operator called" << std::endl;
		//Copie de la partie ClapTrap de rhs
		ClapTrap::operator=(rhs); //Opérateur d'assignation de la classe mère
	}
	else
		std::cout << "Assignment operator called for the same instance" << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energypoint && this->_hitpoint)
	{
		std::cout << "ScavTrap " << this->_name << " attacks "
		<< target << ", causing " << this->_attackdamage
		<< " points of damage!" << std::endl;
		(this->_energypoint)--;
		return ;
	}
	std::cout << this->_name << " has no energy/hit point to attack"
	<< std::endl;
}

void 	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name
	<< " is now in Gate keeper mode" << std::endl;
}