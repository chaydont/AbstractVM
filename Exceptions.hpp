/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:39:26 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 19:10:20 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "IToken.hpp"

#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

/**************************\
 * LEXING ERRORS
\**************************/

struct OverFlowException : std::exception {
    OverFlowException(std::string value, std::string type) : value(value), type(type) {}
    virtual ~OverFlowException() _NOEXCEPT {}
    virtual const char* what() const throw();
    private:
        std::string value;
        std::string type;
};

struct UnderFlowException : std::exception {
    UnderFlowException(std::string value, std::string type) : value(value), type(type) {}
    virtual ~UnderFlowException() _NOEXCEPT {}
    virtual const char* what() const throw();
    private:
        std::string value;
        std::string type;
};

struct UnknownException : std::exception {
    UnknownException(std::string value) : value(value) {}
    virtual ~UnknownException() _NOEXCEPT {}
    virtual const char* what() const throw();
    private:
        std::string value;
};

/**************************\
 * PARSING ERRORS
\**************************/

struct InvalidToken : std::exception {
    InvalidToken(int line, IToken* value, std::string expected) : line(line), value(value), expected(expected) {}
    virtual ~InvalidToken() _NOEXCEPT {}
    virtual const char* what() const throw();
    private:
        int         line;
        IToken*     value;
        std::string expected;
};

struct SecondInstruction : std::exception { // instruction instead of newline
    SecondInstruction(int line, IToken* value) : value(value) {}
    virtual ~SecondInstruction() _NOEXCEPT {}
    virtual const char* what() const throw();
    private:
        int     line;
        IToken* value;
};

struct MissingParameter : std::exception {
    MissingParameter(int line, IToken* value) : line(line), value(value) {}
    virtual ~MissingParameter() _NOEXCEPT {}
    virtual const char* what() const throw();
    private:
        int     line;
        IToken* value;
};

/**************************\
 * RUNTIME ERRORS
\**************************/

#endif /* EXCEPTIONS_HPP */
