/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:04:16 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/28 11:39:08 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:
    FragTrap(std::string name);
    FragTrap();
    FragTrap(const FragTrap &op);
    FragTrap &operator=(const FragTrap &op);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif