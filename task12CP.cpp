#include <iostream>
using namespace std;
int cal_gcd(int number_1 , int number_2);
int cal_LCM (int number_1 , int number_2 , int gcd_resut);
main ()
{
    int number_1;
    int number_2;
    int gcd_result;
    int lcm_result;
 
    cout << "Enter first number: ";
    cin >> number_1;
    cout << "Enter second number: ";
    cin >> number_2;
    gcd_result= cal_gcd(number_1 ,  number_2);
    lcm_result=cal_LCM (number_1 ,number_2 ,  gcd_result);
    cout << lcm_result;
 
}
int cal_gcd(int number_1 , int number_2)
{
       int gcd=0;
   if(number_1<number_2)
    {
     for (int count=1 ; count<=number_1 ; count++)
      {
        if (number_1%count==0 && number_2%count ==0)
        {
          gcd=count;
        }
      }
    }
       if(number_1>number_2)
    {
     for (int count=1 ; count<=number_2 ; count++)
      {
        if (number_1%count==0 && number_2%count ==0)
        {
          gcd=count;
        }
      }
    }
   return gcd;
}
int cal_LCM (int number_1 , int number_2 , int gcd_resut)
{
    int result;
    result=(number_1*number_2)/gcd_resut;
    return result;
}