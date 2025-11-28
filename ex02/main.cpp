/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:10:04 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/28 09:45:21 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{

    FragTrap d("ahmed");
    d.attack("zombe");
    d.takeDamage(4);
    d.beRepaired(3);
    d.highFivesGuys();
}