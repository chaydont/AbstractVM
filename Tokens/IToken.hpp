/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IToken.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 13:43:15 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 12:52:13 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITOKEN_HPP
#define ITOKEN_HPP

#include <iostream>

struct IToken {
    IToken() {}
    virtual ~IToken() {}
    virtual void display() const = 0;
};

#endif /* ITOKEN_HPP */
