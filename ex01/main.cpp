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
    int arr1[5] = {1,2,3,4,5}; 
    char  arr2[5] = {'a','b','c','d','e'}; 

    iter(arr1, 5, _add);
    iter(arr2, 5, reverse);
    return 0;
}
/* 
class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );
 */