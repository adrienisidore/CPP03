/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:39:45 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/10 18:13:45 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

int	main(void)
{
	ClapTrap	Gugus("Gugus");
	ClapTrap	default_;//ClapTrap	default_ = Gugus;
	ClapTrap	copy = Gugus;//Utilise le constructeur par copie alors que je fais pas ClapTrap copy(Gugus)
	//Il faut eviter de declarer et initialiser une valeur en meme temps pour eviter les comportements imprevisibles.
	
	default_ = Gugus;//le nom par defaut est "Default"

	Gugus.attack("Franck");
	Gugus.beRepaired(2);
	Gugus.takeDamage(3);
	Gugus.attack("Franck");
	Gugus.attack("Franck");
	Gugus.attack("Franck");
	Gugus.attack("Franck");
	Gugus.attack("Franck");
	Gugus.attack("Franck");
	Gugus.attack("Franck");
	Gugus.attack("Franck");
	Gugus.attack("Franck");//

	return (0);
}