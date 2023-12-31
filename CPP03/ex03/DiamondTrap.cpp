/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:04:39 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/08 17:19:21 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name){
	std::cout << "[DiamondTrap] constructor called" << "[name: " << _name << "]" << std::endl;
	FragTrap::_hit_points = 100;
	ScavTrap::_energy_points = 50;
	FragTrap::_attack_damage = 30;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "[DiamondTrap] destructor called" << "[name: " << _name << "]" << std::endl;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "[DiamondTrap] name: " << _name << std::endl;
	std::cout << "[ClapTrap] name: " << ClapTrap::_name << std::endl;
}
