/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IOperand.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:31:13 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 16:47:51 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IOPERAND_HPP
#define IOPERAND_HPP

#include <string>
#include "IToken.hpp"

class IOperand {
    public:
        virtual int getPrecision() const = 0; // Precision of the type of the instance
        virtual eOperandType getType() const = 0; // Type of the instance

        virtual IOperand const *operator+(IOperand const &rhs) const = 0; // Sum
        virtual IOperand const *operator-(IOperand const &rhs) const = 0; // Difference
        virtual IOperand const *operator*(IOperand const &rhs) const = 0; // Product
        virtual IOperand const *operator/(IOperand const &rhs) const = 0; // Quotient
        virtual IOperand const *operator%(IOperand const &rhs) const = 0; // Modulo

        virtual std::string const &toString() const = 0; // String representation of the instance
        virtual ~IOperand() {}
};

#endif /* IOPERAND_HPP */
