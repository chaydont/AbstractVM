/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OperandToken.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:29:48 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 17:21:03 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERANDTOKEN_HPP
#define OPERANDTOKEN_HPP

#include "IToken.hpp"

struct OperandToken : IToken {
    OperandToken() {}
    virtual ~OperandToken() {}
    virtual void display() const = 0;

    eOperandType type;
};

struct Int8Token : OperandToken {
    Int8Token(int8_t value) : value(value) { type = INT8; }
    void display() const { std::cout << "Int8 : " << int(value) << std::endl; }
    int8_t value;
};

struct Int16Token : OperandToken {
    Int16Token(int16_t value) : value(value) { type = INT16; }
    void display() const { std::cout << "Int16 : " << int(value) << std::endl; }
    int16_t value;
};

struct Int32Token : OperandToken {
    Int32Token(int32_t value) : value(value) { type = INT32; }
    void display() const { std::cout << "Int32 : " << int(value) << std::endl; }
    int32_t value;
};

struct FloatToken : OperandToken {
    FloatToken(float value) : value(value) { type = FLOAT; }
    void display() const { std::cout << "Float : " << value << std::endl; }
    float value;
};

struct DoubleToken : OperandToken {
    DoubleToken(double value) : value(value) { type = DOUBLE; }
    void display() const { std::cout << "Double : " << value << std::endl; }
    double value;
};


#endif /* OPERANDTOKEN_HPP */
