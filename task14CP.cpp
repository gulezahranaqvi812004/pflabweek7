#include <iostream>
using namespace std;
float cal_price(float machine_price ,int age , int toys);
main()
{
  float age;
  float machine_price;
  float toys;
  float result;
  cout << "Enter age: ";
  cin >> age;
  cout << "Enter price of machine: ";
  cin >> machine_price;
  cout << "Enter unit price of each toy: ";
  cin >> toys;
  result=cal_price( machine_price ,age , toys);
 
  if(result>machine_price)
  {
    cout << "Yes! " << endl <<  result-machine_price << endl;
  }
  else
  {
    cout << "No! " << endl << machine_price-result << endl;   
  }

  }
float cal_price(float machine_price ,int age ,int toys)
{
  float even_age;
  float odd_age;
  float even_price=0;
  float standard=10;
  float odd_price;
  float next=0;
  float final_even_price;
  float final_price;
  if(age%2==0)
  {
    even_age=age/2;
    for(int i=1 ; i<=even_age ; i++)
    {
       even_price=even_price+10;
       for(int count=0 ; count<=even_age ; count=count+10)
        {
        next=next+(even_price);
        }
    }
  final_even_price=next-(even_age); 
  odd_age=age-even_age;
  odd_price=toys*odd_age;
  final_price=odd_price+final_even_price;
  return final_price;
  }
  if(age%2!=0)
  {
    even_age=(age-1)/2;
    for(int i=1 ; i<=even_age ; i++)
    {
       even_price=even_price+10;
       next=next+(even_price);
    }
  final_even_price=next-(even_age); 
  odd_age=age-even_age;
  odd_price=toys*odd_age;
  cout << odd_price << endl;
  final_price=odd_price+final_even_price;
  return final_price;
  }
  
}





