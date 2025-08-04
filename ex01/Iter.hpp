#pragma once

#include <iostream>
#include <cstring>


template <typename T1>
void iter(T1 *arr, size_t size, void (*f)(T1))
{
    for (size_t i = 0; i < size; i++)
    {
        *f(arr[i]);
    }
    
}
