/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FactoryOperand.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:01:10 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 16:13:31 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FACTORYOPERAND_HPP
#define FACTORYOPERAND_HPP

#include "IOperand.hpp"
#include "Operand.hpp"
#include "IToken.hpp"
#include <sstream>

class FactoryOperand {
    private:
        IOperand const *createInt8  (std::string const & value) const;
        IOperand const *createInt16 (std::string const & value) const;
        IOperand const *createInt32 (std::string const & value) const;
        IOperand const *createFloat (std::string const & value) const;
        IOperand const *createDouble(std::string const & value) const;

        template<typename T> 
        IOperand const *createAny(std::string const & value) const;

    public:
        IOperand const *createOperand(eOperandType type, std::string const &value) const;
};

typedef IOperand const *(FactoryOperand::*creationFunc)(std::string const &value) const;

#endif /* FACTORYOPERAND_HPP */
