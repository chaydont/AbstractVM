/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DoubleToken.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:04:05 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 13:18:56 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLETOKEN_HPP
#define DOUBLETOKEN_HPP

#include "IToken.hpp"

struct DoubleToken : public IToken {
    DoubleToken(double value) : value(value) {}
    void display() const { std::cout << "double : " << value << std::endl; }
    double value;
};

#endif /* DOUBLETOKEN_HPP */
