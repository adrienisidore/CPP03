/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:39:45 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/10 20:25:21 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

int	main(void)
{
	ClapTrap	Gugus("Gugus");
	ScavTrap	ScavGus("ScavGus");
	
	ScavGus.guardGate();
	ScavGus.attack("Franck");
	ScavGus.beRepaired(2);
	ScavGus.takeDamage(3);
	ScavGus.attack("Franck");
	//Destruction des couches spécifiques, puis de la base commune
	//ScavTrap puis ClapTrap
	return (0);
}