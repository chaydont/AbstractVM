/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InstrToken.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:35:04 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 17:06:47 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRTOKEN_HPP
#define INSTRTOKEN_HPP

#include "IToken.hpp"

struct InstrToken : public IToken {
    InstrToken(eInstruction value) : value(value) {}
    void display() const { std::cout << "instr : " << value << std::endl; }
    eInstruction value;
};

#endif /* INSTRTOKEN_HPP */
