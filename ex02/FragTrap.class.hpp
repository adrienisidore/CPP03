/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:55:22 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/10 19:59:17 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include "ClapTrap.class.hpp"


class FragTrap : public ClapTrap
{
	public:
		FragTrap();//Constructeur par defaut
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);//Constructeur par copie
		FragTrap	&operator=(const FragTrap &rhs);
		~FragTrap(void);//Destructeur par defaut
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void highFivesGuys(void);
};

#endif