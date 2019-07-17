/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorInstruction.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 18:30:51 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 18:57:03 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ErrorInstruction.hpp"

ErrorInstruction::ErrorInstruction() : error(nullptr) {}

ErrorInstruction::~ErrorInstruction() {}

ErrorInstruction::ErrorInstruction(ErrorInstruction &rhs) { *this = rhs; }

ErrorInstruction &ErrorInstruction::operator=(ErrorInstruction &) { return *this; }


ErrorInstruction::ErrorInstruction(std::exception *error) : error(error) {}

void ErrorInstruction::execute(std::vector<IOperand>) {
    std::cout << error->what() << std::endl;
}