/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:55:22 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/02 17:52:47 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "./ClapTrap.hpp"
# include <iostream>

class ScavTrap : virtual public ClapTrap
{
	protected:
		static const int defaultHitPoints = 100;
		static const int defaultEnergyPoints = 50;
		static const int defaultAttackDamage = 20;
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap	&operator=(const ScavTrap &rhs);
		~ScavTrap(void);
		void attack(const std::string& target);
		void guardGate(void);
};

#endif