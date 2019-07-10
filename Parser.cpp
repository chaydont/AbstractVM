/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:35:12 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 18:55:23 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.hpp"

Parser::Parser() {}

Parser::~Parser() {}

Parser::Parser(Parser &rhs) {
    *this = rhs;
}

Parser &Parser::operator=(Parser &){
    return *this;
}

void Parser::read(std::vector<IToken*> tokens){
    for (size_t i = 0; i < tokens.size(); ++i){
        if (!dynamic_cast<InstrToken*>(tokens[i])){
            
        }
    }
}
