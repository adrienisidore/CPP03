/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:25:04 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/01 11:36:06 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;//propre à DiamondTrap
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap &operator=(const DiamondTrap &rhs);
		~DiamondTrap(void);
		void whoAmI(void);//const ?????
		void attack(const std::string& target); //Celui de ScavTrap

		//tester avec virtual attack
};

#endif
