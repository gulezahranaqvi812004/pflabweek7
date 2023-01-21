#include <iostream>
using namespace std;
float price(float inheritance , int input_year);
main ()
{
    int input_year; 
    float inheritance;
    float result;
    cout << "Enter the inherited amount: ";
    cin >> inheritance;
    cout << "Enter the year: ";
    cin >> input_year;
    result=price( inheritance ,  input_year);
    if (result>inheritance)
    {
        cout << "Yes! He will live a carefree life and will have " << result-inheritance << " dollar left" << endl;
    }
    else if (result<inheritance)
    {
        cout << "He will need " << inheritance-result << " dollars to survive" << endl;
    }
     
}
float price(float inheritance , int input_year)
{
    float even_amount=0;
    float odd_amount=0;
    int age=1800;
    float total;
    for (int count=1800 ; count <= input_year ; count=count+2)
    {   
     even_amount=even_amount+12000;
    }
   
    for (int count=1801 , y=19  ; count <=input_year  ; count=count+2, y=y+2  )
    {
      odd_amount=odd_amount+(12000+(50*y));        
    }
    total=even_amount+odd_amount;
    return total;
}
