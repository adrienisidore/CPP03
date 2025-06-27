/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:39:45 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/10 20:26:37 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//CHANGER TOUS LES HEADER POUR RETIRER .class.
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
	return (0);
}