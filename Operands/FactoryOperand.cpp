/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FactoryOperand.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:04:24 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 15:49:14 by chaydont         ###   ########.fr       */
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

IOperand const *FactoryOperand::createInt8  (std::string const & value) const { return createAny<int8_t> (value); }
IOperand const *FactoryOperand::createInt16 (std::string const & value) const { return createAny<int16_t>(value); }
IOperand const *FactoryOperand::createInt32 (std::string const & value) const { return createAny<int32_t>(value); }
IOperand const *FactoryOperand::createFloat (std::string const & value) const { return createAny<float>  (value); }
IOperand const *FactoryOperand::createDouble(std::string const & value) const { return createAny<double> (value); }

template<typename T> 
IOperand const *FactoryOperand::createAny(std::string const & value) const {
    T a;
    std::stringstream ss(value);

    ss > a;
    return new Operand(a);
}