#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <vector>


#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m" 
#define BLUE  "\033[34m"
#define OLIVE "\033[38;5;3m"
#define PURPLE "\033[38;5;5m"
#define ORANGE "\033[38;5;208m"
#define CYAN "\033[38;5;6m"
#define LIGHT_GRAY "\033[38;5;7m"
#define DARK_GRAY "\033[38;5;8m"
#define END  "\033[0m"


template <typename T1>
class Array
{
private:
    unsigned int size;
    T1 *ptr;

public:
    Array();
    Array(unsigned int i);
    Array(Array const &other);
    Array& operator=(Array const &other);
    T1 operator[](int index);
    ~Array();
    unsigned int Size() const;
    void SetArray(int _index, T1 v);
    //void SetSize(unsigned int _size);
};

/**********************************************************/
/* THIS ARE THE DEFINITION OF THE TEMPLATE FUNCTIONS      */
/* WHEN  USING TEMPLATES, THE DEFINITION OF TIS FUNCTIONS */
/* CAN'T GO TO THE .CPP FILE. IF THATS THE CASE, THE      */
/* COMPILER WILL NOT BE ABLE TO PROCCESS IT               */
/**********************************************************/

template<typename T1>
unsigned int Array<T1>::Size() const {return (this->size);}

//template<typename T1>
/* void Array<T1>::SetSize(unsigned int _size)
{
    this->size = _size;
    delete [] ptr;
    ptr = new T1[this->size]; 
} */

/* template<typename T1>
Array<T1>::Array(unsigned int _size) : size(_size)  {std::cout << "Array Default Constructor called!!" << std::endl;}
 */
template<typename T1>
Array<T1>::Array(Array const &other) : size(other.size) 
{
    std::cout << "Array Copy constructor called!" << std::endl;
    this->ptr = new T1[size]; // default made by myself
    for (int i = 0; i < this->size; i++)
        this->ptr[i] = other.ptr[i];
}


template<typename T1>
Array<T1>& Array<T1>::operator=(Array const &other){
    if (this != &other)
    {
        this->SetSize(other.Size());
        delete this->ptr;
        this->ptr = new T1[this->Size()];
        for (int i = 0; i < this->size; i++)
            ptr[i] = other.ptr[i];
    }
    return (*this);
}

template<typename T1>
Array<T1>::Array() : size(0)
{
    std::cout << "Array Default constructor called!" << std::endl;
    this->ptr = new T1[size]; // default made by myself

}
 
template<typename T1>
Array<T1>::Array(unsigned int _size) : size(_size)
{
    std::cout << "Array Default constructor called!" << std::endl;
    this->ptr = new T1[size]; // default made by myself
}

template<typename T1>
T1 Array<T1>::operator[](int index)
{
    if (static_cast<unsigned int >(index) >= this->Size())
        throw std::runtime_error("index out of bound!");
    return (this->ptr[index]);
}

template<typename T1>
void Array<T1>::SetArray(int _index, T1 v){
    this->ptr[_index] = v;
}


template<typename T1>
Array<T1>::~Array()
{
    delete [] ptr;
    std::cout << "Array Destructor called!" << std::endl;
}







/* Develop a class template Array that contains elements of type T and that implements
the following behavior and functions:
• Construction with no parameter: Creates an empty array.
• Construction with an unsigned int n as a parameter: Creates an array of n elements
initialized by default.
Tip: Try to compile int * a = new int(); then display *a.
• Construction by copy and assignment operator. In both cases, modifying either the
original array or its copy after copying musn’t affect the other array.
• You MUST use the operator new[] to allocate memory. Preventive allocation (al-
locating memory in advance) is forbidden. Your program must never access non-
allocated memory.
• Elements can be accessed through the subscript operator: [ ].
• When accessing an element with the [ ] operator, if its index is out of bounds, an
std::exception is thrown.
• A member function size() that returns the number of elements in the array. This
member function takes no parameters and must not modify the current instance.
As usual, ensure everything works as expected and turn in a main.cpp file that con-
tains your tests. */