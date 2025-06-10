/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:39:45 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/10 20:15:10 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

int	main(void)
{
	ClapTrap	Gugus("Gugus");
	ClapTrap	default_;//ClapTrap	default_ = Gugus;
	ClapTrap	copy = Gugus;//Utilise le constructeur par copie alors que je fais pas ClapTrap copy(Gugus)
	//Il faut eviter de declarer et initialiser une valeur en meme temps pour eviter les comportements imprevisibles.
	ClapTrap	copy2(Gugus);

	std::cout << "copy is called " << copy.getname() << std::endl;//faire un getter pour copy
	std::cout << "copy2 is called " << copy2.getname() << std::endl;//faire un getter pour copy
	
	default_ = Gugus;//le nom par defaut est "Default", Default_ recupere les valeurs de Gugus;
	std::cout << "default_ is called " << default_.getname() << std::endl;//faire un getter pour copy

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