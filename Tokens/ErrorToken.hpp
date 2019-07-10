/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorToken.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:38:03 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 18:54:26 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORTOKEN_HPP
#define ERRORTOKEN_HPP

#include "IToken.hpp"
#include "../Exceptions.hpp"
#include <string>

struct ErrorToken : public IToken {
    ErrorToken(std::exception *value) : value(value) {}
    void display() const { std::cout << "Error : " << value->what() << std::endl; }
    std::exception *value;
};

#endif /* ERRORTOKEN_HPP */
