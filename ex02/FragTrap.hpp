/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:24:59 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/28 09:53:13 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{

public:
    FragTrap(std::string name);
    FragTrap();
    FragTrap(const FragTrap &op);
    FragTrap &operator=(const FragTrap  &op);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif