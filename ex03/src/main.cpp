/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:39:45 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/02 18:24:15 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../DiamondTrap.hpp"

//-Wshadow : Vérifie que _name de DiamondTrap ne cache pas son _name ClapTrap
int	main(void)
{
	ClapTrap	Gugus("Gugus");
	ScavTrap	ScavGus("ScavGus");
	FragTrap	FragGus("FragGus");
	DiamondTrap	DiamondGus("DiamondGus");

	DiamondGus.guardGate();
	DiamondGus.highFivesGuys();
	DiamondGus.attack("Franck");
	DiamondGus.beRepaired(2);
	DiamondGus.takeDamage(3);
	DiamondGus.whoAmI();
	
	DiamondTrap	Diamondtest;

	Diamondtest = DiamondGus;
	std::cout << Diamondtest.get_attackdam() << std::endl;
	std::cout << DiamondGus.get_attackdam() << std::endl;
	
	return (0);
}