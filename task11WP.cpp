#include <iostream>
using namespace std;
void for_counting(int number);
void while_counting(int number);
main()
{
    int number=0;
    cout << "Enter a number: ";
    cin >> number;
    for_counting (number);
    while_counting(number);
}
void for_counting(int number)
{ 
  cout << "**Counting with For loop**" << endl;
  for(int count=1; count <=number ;count=count+1)
  {
    cout << "\t " << count << endl;
  }
}
void while_counting(int number)
{
   cout << "**Counting with For loop**" << endl;
  int i=1;
  while(i<= number)
  {
    cout << "\t " << i << endl;
    i=i+1;
  }
}