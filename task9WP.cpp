#include <iostream>
using namespace std;
int validate_integer(int number);
main()
{
   int num;
   
   cout << "Enter a number: ";
   cin >> num;
   num=validate_integer(num);
}
int validate_integer(int number)
{ 

   while(number<=0)
   {
     cout << "Enter a number greator than zero: " << endl;
     cout << "Enter the number again: ";
     cin >>  number;
     
   }
   
   
  return number;
}
