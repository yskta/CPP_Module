/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 00:13:34 by yokitaga          #+#    #+#             */
/*   Updated: 2024/01/05 17:42:03 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
	std::cout << _type << " constructor called " << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << _type << " constructor called " << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) {
	std::cout << _type << " copy constructor called " << std::endl;
	*this = src;
}

AAnimal &AAnimal::operator=(const AAnimal &right) {
	std::cout << _type << " assignation operator called " << std::endl;
	if (this != &right)
		_type = right._type;
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called " << std::endl;
}

std::string AAnimal::getType() const {
	return (_type);
}

void AAnimal::makeSound() const {
	std::cout << "AAnimal makeSound called " << std::endl;
}