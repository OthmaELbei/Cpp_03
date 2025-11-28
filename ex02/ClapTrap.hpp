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