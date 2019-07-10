/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FactoryOperand.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:04:24 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 18:29:01 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FactoryOperand.hpp"

IOperand const *FactoryOperand::createOperand(eOperandType type, std::string const &value) const {
    creationFunc tab[5] = {
        createInt8,
        createInt16,
        createInt32,
        createFloat,
        createDouble
    };
    return (this->*tab[type])(value);
}

IOperand const *FactoryOperand::createInt8(std::string const & value) const {
    int8_t a;
    std::stringstream ss(value);

    ss >> a;
    return new Operand(a);
}

IOperand const *FactoryOperand::createInt16(std::string const & value) const {
    int16_t a;
    std::stringstream ss(value);

    ss >> a;
    return new Operand(a);
}

IOperand const *FactoryOperand::createInt32(std::string const & value) const {
    int32_t a;
    std::stringstream ss(value);

    ss >> a;
    return new Operand(a);
}

IOperand const *FactoryOperand::createFloat(std::string const & value) const {
    float a;
    std::stringstream ss(value);

    ss >> a;
    return new Operand(a);
}

IOperand const *FactoryOperand::createDouble(std::string const & value) const {
    double a;
    std::stringstream ss(value);

    ss >> a;
    return new Operand(a);
}