/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TokenFactory.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:38:51 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 13:32:31 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TokenFactory.hpp"

IToken *TokenFactory::newToken(std::exception *value) { return new ErrorToken(value); }
IToken *TokenFactory::newToken(int8_t value)          { return new Int8Token(value); }
IToken *TokenFactory::newToken(int16_t value)         { return new Int16Token(value); }
IToken *TokenFactory::newToken(int32_t value)         { return new Int32Token(value); }
IToken *TokenFactory::newToken(float value)           { return new FloatToken(value); }
IToken *TokenFactory::newToken(double value)          { return new DoubleToken(value); }
IToken *TokenFactory::newToken(e_instr value)         { return new InstrToken(value); }
IToken *TokenFactory::newToken()                      { return new NewLineToken(); }