/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:56:16 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/10 20:05:41 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

//Quand on cre ScavTrap ca fait d'abord appel au constructeur parent
ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_name = "Default";
	_hitpoint = 100;
	_energypoint = 50;
	_attackdamage = 20;
}

ScavTrap::ScavTrap(std::string	name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called for " << this->_name << std::endl;
	_hitpoint = 100;
	_energypoint = 50;
	_attackdamage = 20;
}


//Quand jutilise le constructeur par copie, je prends en parametre un constructeur de copie ClapTrap avec copy en parametre.
//copy (rhs) est la partie herite par ScavTrap et est donc de type ClapTrap
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	
	std::cout << "ScavTrap copy constructor called for hitpoint = " << copy._hitpoint << " energypoint = "<< copy._energypoint << " attackdamage = "<< copy._attackdamage << std::endl; 
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap default destructor called for " << _name << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this != &rhs)
	{
		std::cout << "Assignment operator called" << std::endl;
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

void ScavTrap::attack(const std::string& target)
{
	if (this->_energypoint && this->_hitpoint)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
		(this->_energypoint)--;
		return ;
	}
	std::cout << this->_name << " has no energy/hit point to attack" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_energypoint && this->_hitpoint)
	{
		std::cout << "ScavTrap " << this->_name << " lost " << amount << " points of damage!" << std::endl;
		this->_hitpoint -= amount;
		if (this->_hitpoint <= 0)
			std::cout << "ScavTrap " << this->_name << " died" << std::endl;
		return ;
	}
	std::cout << this->_name << " has no more energy/hit point to take damage" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_energypoint && this->_hitpoint)
	{
		std::cout << "ScavTrap " << this->_name << " gained " << amount << " points!" << std::endl;
		(this->_energypoint)--;
		this->_hitpoint += amount;
		return ;
	}
	std::cout << this->_name << " has no more energy/hit point to be repaired" << std::endl;
}

void 	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}