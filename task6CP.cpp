#include <iostream>
using namespace std;
void frequency(int number , int digit);
main()
{
  int number;
  int digit; 
  int count=0;
   
  cout << "Enter a number: ";
  cin >> number;
  cout << "Enter a digit: ";
  cin >> digit;
  frequency( number , digit);
}

void frequency(int number , int digit)
{
    int sum=0;
  while(number%10 != 0)
  { 
   
   int result;
   if(number>0)
   {
   while(number%10 !=0)
   {
     result=number%10;
     if(result==digit)
     {
      sum =sum+1;;
     }
     number=number/10;
   }
   }
  }
    cout << sum;  
 
}