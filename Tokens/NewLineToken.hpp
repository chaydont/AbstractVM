/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewLineToken.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 13:57:23 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 13:48:09 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWLINETOKEN_HPP
#define NEWLINETOKEN_HPP

#include "IToken.hpp"

struct NewLineToken : public IToken {
    NewLineToken() {}
    void display() const { std::cout << std::endl << std::endl; }
};

#endif /* NEWLINETOKEN_HPP */
