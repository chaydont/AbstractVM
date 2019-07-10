/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int8Token.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:00:00 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 12:51:44 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT8TOKEN_HPP
#define INT8TOKEN_HPP

#include "IToken.hpp"
#include <cstdint>

struct Int8Token : public IToken {
    Int8Token(int8_t value) : value(value) {}
    void display() const { std::cout << "Int8 : " << int(value) << std::endl; }
    int8_t value;
};

#endif /* INT8TOKEN_HPP */
