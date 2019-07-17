/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 18:21:24 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/17 18:24:25 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Instruction.hpp"

Instruction::Instruction() {}

Instruction::~Instruction() {}

bool Instruction::hasParam() const { return false; }

void Instruction::giveParam(OperandToken*) {}