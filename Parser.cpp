/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:35:12 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 18:15:08 by chaydont         ###   ########.fr       */
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

Instruction *Parser::createInstruction(eInstruction type) {
    return new Add();
}

void Parser::read(std::list<IToken*> tokens){
    while (tokens.size() > 0){
        try {
            readLine(tokens);
        } catch (std::exception &e) {
            // create ErrorInstruction
        }
   }
}

void Parser::readLine(std::list<IToken*> tokens){
    if (InstrToken* instr = dynamic_cast<InstrToken*>(tokens.front())){
        tokens.pop_front();
        Instruction *new_instr = createInstruction(instr->value);
        if (new_instr->hasParam()){
            if (OperandToken* param = dynamic_cast<OperandToken*>(tokens.front())){
                tokens.pop_front();
                new_instr->giveParam(param);
            } else {
                tokens.pop_front();
                // error
            }
        }
    } else {
        tokens.pop_front();
        // error
    }
    // TODO : check if token is ErrorToken
    // check if there is a newline after, if not, count how many instructions
    if (dynamic_cast<NewLineToken*>(tokens.front())){
        tokens.pop_front();
    } else {
        size_t i = 0;
        while (dynamic_cast<NewLineToken*>(tokens.front())) {
            tokens.pop_front();
            i++;
        }
        // error
    }
}