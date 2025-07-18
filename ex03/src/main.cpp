/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:39:45 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/18 16:00:48 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../DiamondTrap.hpp"

//-Wshadow : Vérifie que _name de DiamondTrap ne cache pas son _name ClapTrap
int	main(void)
{
	DiamondTrap	DiamondGus("DiamondGus");
	std::cout << "--------------- TEST FUNCTION ---------------" << std::endl << std::endl;
	DiamondGus.guardGate();
	DiamondGus.highFivesGuys();
	DiamondGus.attack("Franck");
	DiamondGus.beRepaired(2);
	DiamondGus.takeDamage(3);
	DiamondGus.whoAmI();
	std::cout << "---------------                ---------------" << std::endl << std::endl;
	DiamondTrap	copy(DiamondGus);
	DiamondTrap	copy2;
	copy2 = DiamondGus;
	std::cout << "---------------                ---------------" << std::endl << std::endl;
	return (0);
}