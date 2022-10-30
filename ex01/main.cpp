/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:03:12 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/30 05:19:06 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main (){

    std::cout << "array integers " << std::endl;
    {    
        int arr[] = {0, 6, 34, 41, 12};
        int *ar = arr;
        iter(ar, 5, &printComponents);
    }
    std::cout << "array characters" << std::endl;
    {
        char arr[] = {'a','b','c','d','e','f','g','h','i','j','k'};
        iter(arr, sizeof(arr), &printComponents);
    }
    std::cout << "array  boolien" << std::endl;
    {
        bool arr[] = {true,false};
        iter(arr, sizeof(arr), &printComponents);
        
    }
}