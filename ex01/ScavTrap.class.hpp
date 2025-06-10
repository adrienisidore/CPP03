/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:55:22 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/10 19:54:48 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include "ClapTrap.class.hpp"


class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();//Constructeur par defaut
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);//Constructeur par copie
		ScavTrap	&operator=(const ScavTrap &rhs);
		~ScavTrap(void);//Destructeur par defaut
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate(void);
};

#endif