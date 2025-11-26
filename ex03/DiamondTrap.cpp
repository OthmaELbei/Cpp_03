/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:02:46 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/25 14:12:25 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name) ,ScavTrap(name), Name(name)
{
    setHitpoint(100);
    setEnergy(50);
    setAttack(30);
    std::cout << "DiamondTrap " << Name << " constructed" << std::endl;
}
void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name :" << Name << " Claptrap name:" << ClapTrap::getName() << std::endl;
}