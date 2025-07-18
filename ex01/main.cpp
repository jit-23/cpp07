#include "Iter.hpp"

template <typename T1>
void iter(T1 *arr, size_t size, void (*f)(T1&))
{
    for (size_t i = 0; i < size; i++)
    {
        f(arr[i]);
    }
    
}

void _add(int &nbr);
void reverse(char &letter);

void _add(int &nbr)
{
    nbr++;
    std::cout << nbr << std::endl;
}

void reverse(char &a)
{
    if (a >= 'A' && a <= 'Z')
        a+=32;
    else if (a >= 'a' && a <= 'z')
        a-=32;
    std::cout << a << std::endl;
    
    
}


int main()
{
    int arr1[5] = {1,2,3,4,5}; 
    char  arr2[5] = {'a','b','c','d','e'}; 

    iter(arr1, 5, _add);
    iter(arr2, 5, reverse);
    return 0;
}
