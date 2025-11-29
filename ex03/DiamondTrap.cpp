/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:03:30 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/29 14:55:46 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():FragTrap("default"),ScavTrap("default")
{
    Hitpoint = 100;
    Energy = 50;
    Attack = 30;
    std::cout << "DiamondTrap difolt constructed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :ClapTrap(name + "_clap_name") ,FragTrap(name),ScavTrap(name), Name(name)
{
    Hitpoint = 100;
    Energy = 50;
    Attack = 30;
    std::cout << "DiamondTrap " << Name << " constructed" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &op):ClapTrap(op), FragTrap(op), ScavTrap(op)
{
    std::cout << "copy constracter calle" << std::endl;
    *this = op;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &op) 
{
    std::cout << "DiamondTrap cope assignment operaator called" << std::endl;
    if (this != &op)
    {
        this->Name = op.Name;
        FragTrap::operator=(op);
    }
    return *this;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << Name << " destroyed" << std::endl;
}
void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name :" << Name << " Claptrap name:" << ClapTrap::Name << std::endl;
}