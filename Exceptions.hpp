/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaydont <chaydont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:39:26 by chaydont          #+#    #+#             */
/*   Updated: 2019/07/10 13:45:49 by chaydont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

struct OverFlowException : std::exception {
    OverFlowException(std::string value, std::string type) : value(value), type(type) {}
    virtual ~OverFlowException() _NOEXCEPT {}
    virtual const char* what() const throw();
    private:
        std::string value;
        std::string type;
};

struct UnderFlowException : std::exception {
    UnderFlowException(std::string value, std::string type) : value(value), type(type) {}
    virtual ~UnderFlowException() _NOEXCEPT {}
    virtual const char* what() const throw();
    private:
        std::string value;
        std::string type;
};

struct UnknownException : std::exception {
    UnknownException(std::string value) : value(value) {}
    virtual ~UnknownException() _NOEXCEPT {}
    virtual const char* what() const throw();
    private:
        std::string value;
};


#endif /* EXCEPTIONS_HPP */
