/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:39:45 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/02 15:25:11 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ScavTrap.hpp"

int	main(void)
{
	ClapTrap	Gugus("Gugus");
	ScavTrap	ScavGus("ScavGus");
	ScavTrap	ScavGus2;
	
	ScavGus.guardGate();
	ScavGus.attack("Franck");
	ScavGus.beRepaired(2);
	ScavGus.takeDamage(3);
	Gugus.attack("Franck");
	//Destruction des couches spécifiques, puis de la base commune
	//ScavTrap puis ClapTrap
	return (0);
}