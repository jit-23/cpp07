#include "Iter.hpp"



void _add(int &nbr);
void reverse(char &letter);

void _add(int &nbr)
{
    nbr++;
    //std::cout << nbr << std::endl;
}

void reverse(char &a)
{
    if (a >= 'A' && a <= 'Z')
        a+=32;
    else if (a >= 'a' && a <= 'z')
        a-=32;
   // std::cout << a << std::endl;
}

 int main()
{
    int arr1[] = {1,2,3,4,5}; 
    char  arr2[] = {'a','b','c','d','e'}; 

    iter(arr1, 5, _add);
    iter(arr2, 5, reverse);
    for (int i = 0; i < 5; i++)
        std::cout << arr1[i] << std::endl;
    std::cout << std::endl;
        for (int i = 0; i < 5; i++)
        std::cout << arr2[i] << std::endl;
    
    return 0;
}