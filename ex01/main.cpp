/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 07:50:20 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/25 09:36:35 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"





int main()
{

    ScavTrap d("ahmed");
    d.attack("zombe");
    d.takeDamage(4);
    d.beRepaired(3);
    d.guardGate();
}