#include <iostream>
using namespace std;
void print_series(int number);
main()
{
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
   print_series( number);

}
void print_series(int number)
{
    int previous=0;
    int current=1;
    int next;
    cout << previous << " , " << current << " , ";
     for(int count=0 ; count<=number-2 ; count ++ )
    {
        next=previous+current;
        previous=current;
        current=next;
        cout << " , "  << next << " ";

    }
}