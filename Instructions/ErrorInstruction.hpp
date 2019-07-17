/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorInstruction.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 18:24:36 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 18:57:02 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORINSTRUCTION_HPP
#define ERRORINSTRUCTION_HPP

#include "Instruction.hpp"
#include "Exceptions.hpp"

class ErrorInstruction : public Instruction {
    private:
        std::exception *error;

        ErrorInstruction();
        ErrorInstruction(ErrorInstruction &rhs);
        ErrorInstruction &operator=(ErrorInstruction &rhs);

    public:
        ErrorInstruction(std::exception *error);
        virtual ~ErrorInstruction();

        void execute(std::vector<IOperand>);
};

#endif /* ERRORINSTRUCTION_HPP */
