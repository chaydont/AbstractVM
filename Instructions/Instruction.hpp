/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:21:35 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 18:23:18 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTION_HPP
#define INSTRUCTION_HPP

#include <vector>
#include "IOperand.hpp"
#include "OperandToken.hpp"

class Instruction {
    public:
        Instruction() {}
        virtual ~Instruction() {}
        virtual bool hasParam() const;
        virtual void giveParam(OperandToken*);
        virtual void execute(std::vector<IOperand> memory) = 0;
};

#endif /* INSTRUCTION_HPP */
