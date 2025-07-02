/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisidore <aisidore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:33:31 by aisidore          #+#    #+#             */
/*   Updated: 2025/07/02 12:03:43 by aisidore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP


//ATTENTION CHAQUE POINT H DOIT ETRE INDEPENDANT


# include <iostream>

class ClapTrap 
{
	protected:
		std::string	_name;
		int			_hitpoint;
		int			_energypoint;
		int			_attackdamage;
	public:
		ClapTrap(void);
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap	&operator=(const ClapTrap &rhs);
		~ClapTrap(void);
		std::string getname(void) const;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif