/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:21:35 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 18:33:26 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTION_HPP
#define INSTRUCTION_HPP

class Instruction {
    public:
        Instruction() {}
        virtual ~Instruction() {}
        virtual void execute() = 0;
};

#endif /* INSTRUCTION_HPP */
