/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:55:59 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/27 18:08:56 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string Name;

public:
    void whoAmI();
    DiamondTrap();
    DiamondTrap &operator=(const DiamondTrap &other);
    DiamondTrap(const DiamondTrap &other);
    ~DiamondTrap();
    DiamondTrap(std::string name);
};

#endif