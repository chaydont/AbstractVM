/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InstrToken.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:35:04 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 12:51:49 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRTOKEN_HPP
#define INSTRTOKEN_HPP

#include "IToken.hpp"

enum e_instr {
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

struct InstrToken : public IToken {
    InstrToken(e_instr value) : value(value) {}
    void display() const { std::cout << "instr : " << value << std::endl; }
    e_instr value;
};

#endif /* INSTRTOKEN_HPP */
