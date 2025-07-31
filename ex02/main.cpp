#include "Array.hpp"
 #include <cstdlib>
int main()
{
    
	/************* INT *************/		
    Array <int>_int(10);
	srand(time(0));
	for (unsigned int i = 0; i < _int.Size(); i++){
		_int.SetArray(i,rand() % 100);
	}
	try
	{
		for (unsigned int i = 0; i < _int.Size(); i++)
		{
			std::cout << _int[i] << std::endl;
		}
			
	}
	catch(const std::exception& e)
	{
		std::cerr << ORANGE << e.what() << END << '\n';
	}
	
    
	
	
	/************* Strings *************/		
	Array <std::string>_strings(10);
	for (unsigned int i = 0; i < _strings.Size(); i++)
	{
		if (i % 2 == 0)
			_strings.SetArray(i, std::string("even"));    
		else
			_strings.SetArray(i, std::string("odd"));    
	}
	try
	{
	 	for (unsigned int i = 0; i < _strings.Size() /* + 10 */; i++)
		{
			std::cout << _strings[i] << std::endl;	
		}
	
	}
	catch(const std::exception& e)
	{
		std::cerr << ORANGE << e.what() << END << '\n';
	}
	
	
    
    
    return 0;
}
