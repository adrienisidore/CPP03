/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:39:45 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/17 10:32:26 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../FragTrap.hpp"

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