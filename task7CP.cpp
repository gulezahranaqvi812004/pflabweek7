#include <iostream>
using namespace std;
void digit_sum(int number);
main()
{
   int number;
   
   cout << "Enter a number: ";
   cin >> number;
   digit_sum( number);
}
void digit_sum(int number)
{ 
   int sum=0;
   int result;
   if(number>0)
   {
   while(number%10 !=0)
   {
     result=number%10;
     sum =sum+result;
     number=number/10;
   }
   cout << sum;  
   }
}