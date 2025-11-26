/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:41:10 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/24 11:52:22 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name), Hitpoint(10), Energy(10), Attack(0)
{
    std::cout << "ClapTrap " << Name << " constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (Hitpoint > 0 && Energy > 0)
    {
        std::cout << "ClapTrap " << Name << " attacks   " 
        << target << " ,causing " << Attack << "  points of damage!" << std::endl;
        Energy--;
    }   
    else
        std::cout << "ClapTrap  " << Name << "  can't attack " << std::endl;
    return ;   
}

void ClapTrap::takeDamage(unsigned int amount)
{
        if (Hitpoint == 0)
        {
            std::cout << "clapTrap " << Name << " is dead" << std::endl;
            return;
        }
        std::cout << "ClapTrap  " << Name << " takes " << amount << " points of damage " << std::endl;
            
    Hitpoint -= amount;
    if (Hitpoint < 0)
        Hitpoint = 0;
    if (Hitpoint == 0)
        std::cout << "clapTrap " << Name << " is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hitpoint == 0)
    {
        std::cout << "ClapTrap " << Name << " is died" << std::endl;
        return;
    }
    if ( Energy == 0)
    {
        std::cout << "ClapTrap " << Name << "  do not have any  Energy" << std::endl;
        return ;
    }

        std::cout << "ClapTrap " << Name << " Takes " << amount << " points of damage" << std::endl;
        Hitpoint += amount;
        Energy--;

}