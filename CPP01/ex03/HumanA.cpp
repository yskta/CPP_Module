/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:55:42 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/07 15:04:48 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << _name << " is dead" << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}