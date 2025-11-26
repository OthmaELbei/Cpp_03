/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:04:53 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/25 14:08:25 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << getName() << " destroyed " << std::endl;
}
void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << getName() << "requests a high five! " << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    setHitpoint(100);
    setEnergy(100);
    setAttack(30);
    std::cout << "FragTrap " << getName() << " constructed" << std::endl;
}