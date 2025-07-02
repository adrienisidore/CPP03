/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:55:22 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/02 17:52:00 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "./ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap
{
	protected:
		static const int defaultHitPoints = 100;
		static const int defaultEnergyPoints = 100;
		static const int defaultAttackDamage = 30;
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap	&operator=(const FragTrap &rhs);
		~FragTrap(void);
		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif