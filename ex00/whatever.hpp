/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 00:44:19 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/30 02:00:22 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string>
#include <iostream>

template<typename T>

void swap(T &content1, T &content2){
    T tmp = content1;
    content1 = content2;
    content2 = tmp;
}

template<typename N>

N   max(const N content1,const N content2){
   if (content2 >= content1) return content2;
   else return content1;
}

template< typename U >

U min(const U content1 ,const U content2)
{
    if (content1 >= content2) return (content2);
    else return (content2);
}



#endif