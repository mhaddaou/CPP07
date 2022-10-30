/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:03:10 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/30 05:12:28 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename F>

void iter(F *arr, unsigned int len, void (*f)(F &content)){
    unsigned int i = 0;
    while (i < len){
        (*f)(arr[i]);
        i++;
    }
}

template < typename PF>

void printComponents(PF &content){
    std::cout << content << std::endl;
}

#endif