/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 05:34:12 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/30 15:32:47 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

template <class T>
class Array{
    private:
        T *array;
        unsigned int _size;
    public:
        Array():_size(0){
            array = new T[_size];
        }
        Array(unsigned int n):_size(n){
            array = new T[_size];
        }
        Array (const Array&  other){
            *this  = other;
        }
        Array &operator=(const Array& other){
            array = other.array;
            _size = other._size;
        }
        Array &operator[](const Array& other){
            return (arr[n]);
        }
        bool &operator(const Array& other){
        
        int size(){
            return (sizeof(array));
        }
};

#endif