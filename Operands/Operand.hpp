/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operand.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:40:17 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 18:29:36 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERAND_HPP
#define OPERAND_HPP

#include "IOperand.hpp"

template <class T>
class Operand : public IOperand {
    private:
        T value;

        Operand() : value(0) {}
        Operand(Operand &rhs) { *this = rhs; }
        Operand &operator=(Operand &rhs) { value = rhs.value; }

    public:
        Operand(T value) : value(value) {}

        int getPrecision() const { return INT8; }
        eOperandType getType() const { return INT8; }
        
        IOperand const *operator+(IOperand const &rhs) const {
            std::stringstream ss1(toString());
            std::stringstream ss2(rhs.toString());
            double a, b;
            ss1 >> a;
            ss2 >> b;
            std::ostringstream strs;
            strs << a + b;
            return new createOperand(max(rhs.getPrecision(), getPrecision()), strs.str(););
        }

        IOperand const *operator-(IOperand const &rhs) const {
            std::stringstream ss1(toString());
            std::stringstream ss2(rhs.toString());
            double a, b;
            ss1 >> a;
            ss2 >> b;
            std::ostringstream strs;
            strs << a - b;
            return new createOperand(max(rhs.getPrecision(), getPrecision()), strs.str(););
        }

        IOperand const *operator*(IOperand const &rhs) const {
            std::stringstream ss1(toString());
            std::stringstream ss2(rhs.toString());
            double a, b;
            ss1 >> a;
            ss2 >> b;
            std::ostringstream strs;
            strs << a * b;
            return new createOperand(max(rhs.getPrecision(), getPrecision()), strs.str(););
        }
        
        IOperand const *operator/(IOperand const &rhs) const {
            std::stringstream ss1(toString());
            std::stringstream ss2(rhs.toString());
            double a, b;
            ss1 >> a;
            ss2 >> b;
            std::ostringstream strs;
            strs << a / b;
            return new createOperand(max(rhs.getPrecision(), getPrecision()), strs.str(););
        }

        IOperand const *operator%(IOperand const &rhs) const {
            std::stringstream ss1(toString());
            std::stringstream ss2(rhs.toString());
            double a, b;
            ss1 >> a;
            ss2 >> b;
            std::ostringstream strs;
            strs << a % b;
            return new createOperand(max(rhs.getPrecision(), getPrecision()), strs.str());
        }

        std::string const &toString() const {
            std::ostringstream strs;
            strs << value;
            return strs.str();
        }

        virtual ~Operand() {}
};

#endif /* OPERAND_HPP */