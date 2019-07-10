/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int32Token.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:02:17 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 12:51:54 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT32TOKEN_HPP
#define INT32TOKEN_HPP

#include "IToken.hpp"
#include <cstdint>

struct Int32Token : public IToken {
    Int32Token(int32_t value) : value(value) {}
    void display() const { std::cout << "Int32 : " << value << std::endl; }
    int32_t value;
};

#endif /* INT32TOKEN_HPP */
