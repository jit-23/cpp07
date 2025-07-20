#include "Array.hpp"

int main()
{
    
    Array <int>_int(2);
  //  Array <std::string>_strings(2);
    
    for (unsigned int i = 0; i < _int.Size(); i++)
        _int.SetArray(i, i + 1);    
 //   std::cout << _int[1] << std::endl;
    
    //for (unsigned int i = 0; i < _int.Size(); i++)
    //    _int.SetArray(i, "asd");    
    //std::cout << _strings[1] << std::endl;
    
    
    return 0;
}
