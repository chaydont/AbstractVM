/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:43:01 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 19:11:43 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exceptions.hpp"

const char* OverFlowException::what() const throw() {
    return std::string("OverFlow : " + value + " is too big for " + type).c_str();
}

const char* UnderFlowException::what() const throw() {
    return std::string("UnderFlow : " + value + " is too small for " + type).c_str();
}

const char* UnknownException::what() const throw() {
    return std::string("Unknown : " + value + " isn't a valid instruction").c_str();
}

// TODO : write messages for all exceptions