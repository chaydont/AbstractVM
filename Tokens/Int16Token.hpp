/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int16Token.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:00:38 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 12:51:51 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT16TOKEN_HPP
#define INT16TOKEN_HPP

#include "IToken.hpp"
#include <cstdint>

struct Int16Token : public IToken {
    Int16Token(int16_t value) : value(value) {}
    void display() const { std::cout << "Int16 : " << value << std::endl; }
    int16_t value;
};

#endif /* INT16TOKEN_HPP */
