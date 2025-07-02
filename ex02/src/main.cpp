/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:39:45 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/02 15:24:36 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../FragTrap.hpp"

//CHANGER TOUS LES HEADER POUR RETIRER .class.
int	main(void)
{
	ClapTrap	Gugus("Gugus");
	FragTrap	FragGus("FragGus");
	
	FragGus.highFivesGuys();
	FragGus.attack("Franck");
	FragGus.beRepaired(2);
	FragGus.takeDamage(3);
	FragGus.attack("Franck");
	return (0);
}