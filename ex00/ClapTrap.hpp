/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ClapTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:41:25 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/24 11:42:52 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
private:
    std::string Name;
    int Hitpoint;
    int Energy;
    int Attack;

public:
    ClapTrap(std::string name);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif