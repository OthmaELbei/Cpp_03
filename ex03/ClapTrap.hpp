/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:58:58 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/25 13:59:24 by oelbied          ###   ########.fr       */
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

    std::string getName()
    {
        return Name;
    }
    void setHitpoint(int newhitpoint)
    {
        Hitpoint = newhitpoint;
    }
    int getHitpoint()
    {
        return Hitpoint;
    }
    void setEnergy(int newEnergy)
    {
        Energy = newEnergy;
    }
    int getEnergy()
    {
        return Energy;
    }
    void setAttack(int newAttack)
    {
        Attack = newAttack;
    }
    int getAttack()
    {
        return Attack;
    }
};

#endif