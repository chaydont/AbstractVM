/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:23:58 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 18:17:05 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADD_HPP
#define ADD_HPP

#include "Instruction.hpp"

class Add : public Instruction {
    public:
        Add();
        virtual ~Add();
        bool hasParam() const;
        void giveParam(OperandToken*);
        void execute(std::vector<IOperand> memory);
};

#endif /* ADD_HPP */
