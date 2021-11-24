#pragma once
#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap&);
		~ClapTrap();

		ClapTrap &operator=(ClapTrap const & rhs);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string	_name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
};

#endif