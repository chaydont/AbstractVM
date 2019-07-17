/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pop.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:59:41 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 18:20:03 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POP_HPP
#define POP_HPP

#include "Instruction.hpp"

class Pop : public Instruction {
    public:
        Pop();
        virtual ~Pop();
        bool hasParam() const;
        void giveParam(IOperand*);
        void execute(std::vector<IOperand> memory);
};

#endif /* POP_HPP */
