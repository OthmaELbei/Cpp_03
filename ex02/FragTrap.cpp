/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:04:53 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/28 17:06:18 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << Name << " destroyed " << std::endl;
}

FragTrap::FragTrap() : ClapTrap("default")
{
    Hitpoint = 100;
    Energy = 100;
    Attack = 30;
    std::cout << "FragTrap " << Name << " constructed" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    Hitpoint = 100;
    Energy = 100;
    Attack = 30;
    std::cout << "FragTrap " << Name << " constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &op) : ClapTrap(op)
{
    std::cout << "this FragTrap copy constructer" << std::endl;
    *this = op;
}

FragTrap &FragTrap::operator=(const FragTrap &op)
{
    if (this != &op)
    {
        ClapTrap::operator=(op);
    }
    return *this;
    std::cout << "Fragtrap cope assignment operaator called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    if (Hitpoint > 0 )
        std::cout << "FragTrap " << Name << " requests a high five! " << std::endl;
}