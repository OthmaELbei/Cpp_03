/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:31:37 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/28 09:57:22 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
protected:
    std::string Name;
    int Hitpoint;
    int Energy;
    int Attack;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &op);
    ClapTrap &operator=(const ClapTrap &op);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif