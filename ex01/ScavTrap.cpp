/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:32:56 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/25 09:35:50 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << getName() << " destroyed " << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
};

ScavTrap ::ScavTrap(std::string name) : ClapTrap(name)
{
    setHitpoint(100);
    setEnergy(50);
    setAttack(20);
    std::cout << "ScavTrap " << getName() << " constructed" << std::endl;
};

void ScavTrap::attack(const std::string &target)
{
    if (getHitpoint() == 0 || getEnergy() == 0)
        std::cout << "ScavTrap " << getName() << "can't attack" << std::endl;
    else
    {
        std::cout << "ScavTrap " << getName() << " attacks " << target 
        << " ,causing " << getAttack() << " points of damage" << std::endl;
        setEnergy(getEnergy() - 1);
    }
}