#include "Array.hpp"

/* template<typename T1>
unsigned int Array<T1>::Size() const {return (this->size);}

template<typename T1>
void Array<T1>::SetSize(unsigned int _size)
{
    this->size = _size;
}

template<typename T1>
Array<T1>::Array(unsigned int _size) : size(_size)  {std::cout << "Array Default Constructor called!!" << std::endl;}
 
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
int & Array<T1>::operator[](int index)
{
    try
    {
        if (index >= this->Size())
            throw(std::runtime_error("index out of bound!"));
        return (this->ptr[index]);    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
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


 */