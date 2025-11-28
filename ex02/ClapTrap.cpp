/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:23:21 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/28 16:54:47 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name), Hitpoint(10), Energy(10), Attack(0)
{
    std::cout << "ClapTrap " << Name << " constructed" << std::endl;
}

ClapTrap::ClapTrap() : Name("default"), Hitpoint(10), Energy(10), Attack(0)
{
    std::cout << "ClapTrap " << Name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &op)
{
    std::cout << "this copy constructer" << std::endl;
    *this = op;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &op)
{
    std::cout << "ClapTrap cope assignment operaator called" << std::endl;
    
    if (this != &op)
    {
        this->Name = op.Name;
        this->Hitpoint = op.Hitpoint;
        this->Attack = op.Attack;
        this->Energy = op.Energy;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (Hitpoint > 0 && Energy > 0)
    {
        std::cout << "ClapTrap " << Name << " attacks "
                  << target << " ,causing " << Attack << " points of damage!" << std::endl;
        Energy--;
    }
    else
        std::cout << "ClapTrap  " << Name << "  can't attack " << std::endl;
    return;
}

void ClapTrap::takeDamage(unsigned int amount)
{

    if (((long)Hitpoint - (long)amount) < 0)
        Hitpoint = 0;
    if (Hitpoint == 0)
    {
        std::cout << "clapTrap " << Name << " is dead" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage " << std::endl;
    Hitpoint -= amount;
    if (Hitpoint == 0)
        std::cout << "clapTrap " << Name << " is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hitpoint == 0)
    {
        std::cout << "ClapTrap " << Name << " is dead" << std::endl;
        return;
    }
    if (Energy == 0)
    {
        std::cout << "ClapTrap " << Name << "  do not have any  Energy" << std::endl;
        return;
    }

    std::cout << "ClapTrap " << Name << " is repaired by " << amount << " points" << std::endl;
    if (((long)Hitpoint + (long)amount) > __INT32_MAX__)
        Hitpoint = __INT32_MAX__;
    else
        Hitpoint += amount;
    Energy--;
}