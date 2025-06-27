/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:56:16 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/10 20:27:51 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

//Quand on cre FragTrap ca fait d'abord appel au constructeur parent
//Peut on initialiser les valeurs de FragTrap dans la liste d'initialisation ? Se renseigner sur internet
FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string	name) : ClapTrap(name)
{
	std::cout << " FragTrap constructor called for " << _name << std::endl;
	_hitpoint = 100;
	_energypoint = 50;
	_attackdamage = 20;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	//CHANGER POUR this
	std::cout << "FragTrap copy constructor called for hitpoint = " << copy._hitpoint << " energypoint = "<< copy._energypoint << " attackdamage = "<< copy._attackdamage << std::endl; 
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap default destructor called for " << _name << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_energypoint && this->_hitpoint)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_attackdamage << " points of damage!" << std::endl;
		(this->_energypoint)--;
		return ;
	}
	std::cout << this->_name << " has no energy/hit point to attack" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Give me a high five!" << std::endl;
}