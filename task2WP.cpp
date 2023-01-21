#include <iostream>
using namespace std;
int sum( );
main()
{
    int number;
    number=sum( );
    cout << "Sum: " << number;
}
int sum( )
{
    int sum=0;
     for(int count=1 ; count<=5 ; count ++ )
    {
      sum=sum+count;
    }
    return sum;
}