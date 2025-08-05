#pragma once

#include <iostream>
#include <cstring>


template <typename T1, typename T2>
void iter(T1 *arr, int size, void (*f)(T2 &))
{
    for (size_t i = 0; i < size; i++)
        f(arr[i]);
} 
