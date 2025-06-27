//Header


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
    : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), _name("Default")
{
	std::cout << "DiamondTrap default constructor called for " << this->_name << std::endl;
	this->_hitpoint = FragTrap::_hitpoint;
	this->_energypoint = ScavTrap::_energypoint;
	this->_attackdamage = FragTrap::_attackdamage;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	std::cout << "DiamondTrap constructor called for " << this->_name << std::endl;
	this->_hitpoint = FragTrap::_hitpoint;
	this->_energypoint = ScavTrap::_energypoint;
	this->_attackdamage = FragTrap::_attackdamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
	: ClapTrap(copy), FragTrap(copy), ScavTrap(copy), _name(copy._name)
{
	this->_hitpoint = FragTrap::_hitpoint;
	this->_energypoint = ScavTrap::_energypoint;
	this->_attackdamage = FragTrap::_attackdamage;
	std::cout << "ScavTrap copy constructor called for hitpoint = "
	<< this->_hitpoint << " energypoint = "<< this->_energypoint << " attackdamage = "
	<< this->_attackdamage << std::endl; 
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
    if (this != &rhs)
	{
		std::cout << "DiamondTrap assignment operator called" << std::endl;
		ClapTrap::operator=(rhs);
        this->_name = rhs._name;
	}
	else
		std::cout << "Assignment operator called for the same instance" << std::endl;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->_name << ", and my ClapTrap name is "
    << ClapTrap::_name << std::endl;
}

// Redéfinition explicite de attack() pour appeler celle de ScavTrap
void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
