/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:32:56 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/28 17:12:08 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << Name << " destroyed " << std::endl;
}
ScavTrap ::ScavTrap(std::string name) : ClapTrap(name)
{
    Hitpoint = 100;
    Energy = 50;
    Attack = 20;
    std::cout << "ScavTrap " << Name << " constructed" << std::endl;
};

ScavTrap::ScavTrap() : ClapTrap("default")
{
    Hitpoint = 10;
    Energy = 10;
    Attack = 0;
    std::cout << "this dufolte copy constracter" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &op) : ClapTrap(op)
{
    std::cout << "this ScavTrap copy constructer" << std::endl;
    *this = op;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &op)
{
     std::cout << "ScavTrap cope assignment operaator called" << std::endl;
    if (this != &op)
    {
        ScavTrap::operator=(op);
    }
    return *this;
}
void ScavTrap::guardGate()
{
    if (Hitpoint > 0)
        std::cout << "ScavTrap " << Name << " is now in Gate keeper mode." << std::endl;
};

void ScavTrap::attack(const std::string &target)
{
    if (Hitpoint == 0 || Energy == 0)
        std::cout << "ScavTrap " << Name << "can't attack" << std::endl;
    else
    {
        std::cout << "ScavTrap " << Name << " attacks " << target
                  << " ,causing " << Attack << " points of damage" << std::endl;
        Energy -= 1;
    }
}