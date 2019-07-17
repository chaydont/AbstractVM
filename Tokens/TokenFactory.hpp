/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TokenFactory.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:33:41 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 16:33:04 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKENFACTORY_HPP
#define TOKENFACTORY_HPP

#include "IToken.hpp"
#include "Exceptions.hpp"
#include "OperandToken.hpp"
#include "NewLineToken.hpp"
#include "InstrToken.hpp"
#include "ErrorToken.hpp"

#include <regex>
#include <string>

class TokenFactory {
    public:
        static IToken *newToken(std::exception*);
        static IToken *newToken(int8_t);
        static IToken *newToken(int16_t);
        static IToken *newToken(int32_t);
        static IToken *newToken(float);
        static IToken *newToken(double);
        static IToken *newToken(e_instr);
        static IToken *newToken();
};

#endif /* TOKENFACTORY_HPP */
