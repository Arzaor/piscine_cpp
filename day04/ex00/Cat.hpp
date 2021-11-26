#pragma once
#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat&);
		virtual ~Cat();

		virtual void	makeSound() const;
};

#endif