/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:33:14 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/25 09:36:19 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string name);
    ~ScavTrap();
    void attack(const std::string &target);
    void guardGate();
};

#endif