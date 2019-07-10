/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:08:37 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 18:56:41 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_HPP
#define PARSER_HPP

#include "Lexer.hpp"
#include "IToken.hpp"
#include "Instruction.hpp"
#include "IOperand.hpp"

class Parser {
    private:
        std::vector<Instruction*> instructions;
        
        public:
            Parser();
            virtual ~Parser();
            Parser(Parser &);
            Parser &operator=(Parser &);
    
            void read(std::vector<IToken*> tokens);
};

#endif /* PARSER_HPP */
