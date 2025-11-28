/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:15:09 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/28 11:16:20 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
int main()
{
    ScavTrap d("ahmed");
    d.attack("zombe");
    d.takeDamage(4);
    d.beRepaired(3);
    d.guardGate();
}