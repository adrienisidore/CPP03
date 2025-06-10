/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:33:31 by aisidore          #+#    #+#             */
/*   Updated: 2025/06/10 20:16:12 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//S'assurer que j'ai pas oublie de fct pour la forme canonique

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap 
{
	protected:
		std::string	_name;
		int			_hitpoint;
		int			_energypoint;
		int			_attackdamage;
	
	public:
		ClapTrap(void);//Constructeur par defaut
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);//Constructeur par copie
		ClapTrap	&operator=(const ClapTrap &rhs);
		~ClapTrap(void);//Destructeur par defaut
		
		std::string getname(void);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif