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

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Gugus("Gugus");
	ClapTrap	default_;
	ClapTrap	copy = Gugus;//Constructeur par copie
	ClapTrap	copy2(Gugus);//Idem

	std::cout << "copy is called " << copy.getname() << std::endl;
	std::cout << "copy2 is called " << copy2.getname() << std::endl;
	default_ = Gugus;
	std::cout << "default_ is called " << default_.getname() << std::endl;
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