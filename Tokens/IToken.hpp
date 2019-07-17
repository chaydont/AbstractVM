/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IToken.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 13:43:15 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 17:06:40 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITOKEN_HPP
#define ITOKEN_HPP

#include <iostream>
#include <cstdint>

enum eOperandType{
    INT8,
    INT16,
    INT32,
    FLOAT,
    DOUBLE
};

enum eInstruction {
    PUSH,
    POP,
    DUMP,
    ASSERT,
    ADD,
    SUB,
    MUL,
    DIV,
    MOD,
    PRINT,
    EXIT
};


struct IToken {
    IToken() {}
    virtual ~IToken() {}
    virtual void display() const = 0;
};

#endif /* ITOKEN_HPP */
