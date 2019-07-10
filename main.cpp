/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:42:32 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 15:20:47 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Lexer.hpp"
#include "Parser.hpp"

int main(int argc, char **argv){
    Lexer lexer;
    // Parser parser;

    if (argc == 1){
        lexer.read(std::cin);
    } else if (argc == 2) {
        std::fstream file(argv[1]);
        lexer.read(file);
        if (errno){
            std::cout << "invalid file" << std::endl;
            return 0;
        }
    } else {
        std::cout << "usage: ./avm [filename]" << std::endl;
        return 0;
    }
    lexer.display();
    // parser.read(lexer.getTokens());

}