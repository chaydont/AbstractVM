/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:07:23 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 18:56:40 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXER_HPP
#define LEXER_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>
#include <iterator>

#include "TokenFactory.hpp"
#include "Exceptions.hpp"
#include "IToken.hpp"

class Lexer {
    private:
        static const std::string instructions[11];

        std::vector<IToken*> tokens;
        bool readLine(std::stringstream &);
        IToken *createToken(std::string);
        IToken *detectInstr(std::string);
        IToken *detectValue(std::string);
        std::string getNumber(std::string);
        IToken *getInt8(std::string);

        template<typename T>
        IToken *getValue(std::string);
        
        Lexer(Lexer const &);
        Lexer &operator=(Lexer const &);

    public:
        Lexer();
        virtual ~Lexer();

        void read(std::istream&);
        void display() const;
        std::vector<IToken*> getTokens();
};

#endif /* LEXER_HPP */
