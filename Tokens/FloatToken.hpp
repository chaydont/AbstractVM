/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FloatToken.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:03:18 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 12:52:07 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOATTOKEN_HPP
#define FLOATTOKEN_HPP

#include "IToken.hpp"

struct FloatToken : public IToken {
    FloatToken(float value) : value(value) {}
    void display() const { std::cout << "float : " << value << std::endl; }
    float value;
};

#endif /* FLOATTOKEN_HPP */
