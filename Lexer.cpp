/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:31:07 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 18:47:58 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Lexer.hpp"

Lexer::Lexer() {}

Lexer::~Lexer(){}

Lexer::Lexer(Lexer const &a){
    *this = a;
}

Lexer &Lexer::operator=(Lexer const &){
    return *this;
}

void Lexer::read(std::istream &stream){
    std::string str;
    while (!stream.eof() && getline(stream, str)){
        std::stringstream ss(str);
        if (readLine(ss))
            break;
    }
}

bool Lexer::readLine(std::stringstream &ss){
    std::string str;
    IToken *token;

    while (!ss.eof()){
        ss >> str;
        if (str.rfind(";;", 0) == 0){
            return true;
        } else if ((token = detectInstr(str)) != NULL){
            tokens.push_back(token);
        } else if ((token = detectValue(str)) != NULL) {
            tokens.push_back(token);
        } else if (str.rfind(";", 0) == 0) {
            break;
        } else {
            tokens.push_back(TokenFactory::newToken(new UnknownException(str)));
        }
    }
    tokens.push_back(TokenFactory::newToken());
    return false;
}

IToken *Lexer::detectInstr(std::string str) {
    for (size_t i = 0; i < 11; i++){
        if (instructions[i] == str){
            return TokenFactory::newToken(static_cast<eInstruction>(i));
        }
    }
    return NULL;
}

IToken *Lexer::detectValue(std::string str) {
    if (std::regex_match(str, std::regex("int8\\([-]?[0-9]+\\)"))){
        return getInt8(str);
    } else if (std::regex_match(str, std::regex("int16\\([-]?[0-9]+\\)"))){
        return getValue<int16_t>(str);
    } else if (std::regex_match(str, std::regex("int32\\([-]?[0-9]+\\)"))){
        return getValue<int32_t>(str);
    } else if (std::regex_match(str, std::regex("double\\([-]?[0-9]+.[0-9]+\\)"))){
        return getValue<double>(str);
    } else if (std::regex_match(str, std::regex("float\\([-]?[0-9]+.[0-9]+\\)"))){
        return getValue<float>(str);
    } else {
        return NULL;
    }
}

std::string Lexer::getNumber(std::string str){
    return str.substr(str.find('(') + 1, str.find(')')-str.find('(') - 1);
}

template<typename T>
IToken *Lexer::getValue(std::string str){
    T value;
    std::stringstream ss(getNumber(str));
    ss >> value;
    if (!ss && value == std::numeric_limits<T>::max())
        return TokenFactory::newToken(new OverFlowException(getNumber(str), str.substr(0, str.find('('))));
    else if (!ss && value == std::numeric_limits<T>::min())
        return TokenFactory::newToken(new UnderFlowException(getNumber(str), str.substr(0, str.find('('))));
    else
        return TokenFactory::newToken(value);
}

IToken *Lexer::getInt8(std::string str){
    int16_t value;
    std::stringstream ss(getNumber(str));
    ss >> value;
    if (value > std::numeric_limits<int8_t>::max())
        return TokenFactory::newToken(new OverFlowException(getNumber(str), "int8"));
    else if (value < std::numeric_limits<int8_t>::min())
        return TokenFactory::newToken(new UnderFlowException(getNumber(str), "int8"));
    else
        return TokenFactory::newToken(static_cast<int8_t>(value));
}

void Lexer::display() const {
    for (const auto& token : tokens){
        token->display();
    }
}

bool Lexer::checkError() const {
    size_t line = 1;
    bool errorFound = false;
    for (const auto& token : tokens){
        if (dynamic_cast<NewLineToken*>(token)){
            line++;
        } else if (ErrorToken* error = dynamic_cast<ErrorToken*>(token)) {
            std::cout << "Line 1 : " << error->value->what() << std::endl;
            errorFound = true;
        }
    }
    return errorFound;
}

const std::string Lexer::instructions[11] = {
    "push",
    "pop",
    "dump",
    "assert",
    "add",
    "sub",
    "mul",
    "div",
    "mod",
    "print",
    "exit"
};