/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:50:14 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/28 15:58:58 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d("AHMED");

    d.whoAmI();
    d.attack("zombie");
    d.highFivesGuys();
    d.guardGate();

    return 0;
}
