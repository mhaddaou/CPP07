/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 05:34:12 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/30 21:00:02 by mhaddaou         ###   ########.fr       */
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
        Array & operator = ( const Array & other )
        {
            if (this == &other)
                return (*this);
            this->_size = other._size;
            this->array = new T[this->_size];
            for (size_t i = 0; i < this->_size; i++)
                this->array[i] = other.array[i];
            return (*this);
        };

        T &operator[](unsigned int i)
        {
            if (i >= _size)
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