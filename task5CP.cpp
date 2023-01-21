#include <iostream>
using namespace std;
void split(int number);
main()
{
   int number;
   
   cout << "Enter a number: ";
   cin >> number;
   split( number);
}
void split(int number)
{ 
   int sum=0;
   if(number>0)
   {
   while(number%10 !=0)
   {
     number=number/10;
     sum =sum+1;
   }
   cout << sum;  
   }
}