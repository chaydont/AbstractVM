/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:08:37 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 18:09:56 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_HPP
#define PARSER_HPP

#include "Tokens.hpp"
#include "Instructions.hpp"
#include "IOperand.hpp"

#include <list>

class Parser {
    private:
        std::list<Instruction*> instructions;
        
        Instruction *createInstruction(eInstruction type);
        void readLine(std::list<IToken*> tokens);
        
        public:
            Parser();
            virtual ~Parser();
            Parser(Parser &);
            Parser &operator=(Parser &);
    
            void read(std::list<IToken*> tokens);
};

#endif /* PARSER_HPP */
