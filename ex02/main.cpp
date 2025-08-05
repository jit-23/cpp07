#include "Array.hpp"
 #include <cstdlib>
int main()
{
    
	/************* INT *************/		
    Array <int>_int(10);
	Array <std::string>_strings(10);
	srand(time(0));
	try
	{
		for (unsigned int i = 0; i < _int.Size(); i++)
		{
			//_int.SetArray(i,rand() % 100);
			_int[i] = rand() % 100;
		}
		for (unsigned int i = 0; i < _int.Size(); i++)
			std::cout << _int[i] << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << ORANGE << e.what() << END << '\n';
	}
	/************* Strings *************/
	try
	{
		for (unsigned int i = 0; i < _strings.Size() /*  + 10 */ ; i++){
			if (i % 2 == 0)
			{
				_strings.SetArray(i, std::string("even"));    
				_strings[i] = std::string("even");
			}
			else
			{
				_strings[i] = std::string("odd");
				//_strings.SetArray(i, std::string("odd"));
			}
		}
		for (unsigned int i = 0; i < _strings.Size() /* + 10 */; i++) // try catch to prevent index out of bound 
			std::cout << _strings[i] << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << ORANGE << e.what() << END << '\n';
	}

	std::cout << "/***************************/" << std::endl;
	std::cout << "/*DEEP COPY                */" << std::endl;
	std::cout << "/***************************/" << std::endl;

	Array <std::string>_strings2(_strings);
	for (unsigned int i = 0; i < _strings.Size(); i++)
		_strings.SetArray(i, std::string("empty"));    
	
	std::cout<< BLUE << "strings was modified and strings2 will keep its array"<< END << std::endl;
	
	for (unsigned int i = 0; i < _strings2.Size(); i++)
		std::cout << _strings2[i] << std::endl;    
    
	try
	{
		std::cout << _strings2[100] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << ORANGE << e.what() <<END<< '\n';
	}
	


    return 0;
}
