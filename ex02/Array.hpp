/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 05:34:12 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/31 01:42:12 by mhaddaou         ###   ########.fr       */
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
            array = new T[0];
        };
        Array(unsigned int n):_size(n){
            array = new T[_size];
        };
        Array (const Array&  other){
            *this  = other;
        };
        Array &operator=(const Array &other){
            _size = other._size;
            array = new T[_size];
            array = other.array;
            return (*this);
        };
        T &operator[](unsigned int i)
        {
            if (i < 0 || i >= _size)
                throw std::exception();
            return (array[i]);
        };
        int size() const{
            return (_size);
        };
        ~Array(){
            if (_size > 0)
                delete [] array;
        };
};

#endif