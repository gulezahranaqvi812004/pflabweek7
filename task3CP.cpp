#include <iostream>
using namespace std;
void print_table(int table);
main()
{
    int table;
    cout << "Enter number: ";
    cin >> table;
    print_table( table);
   
}
void print_table(int table)
{
 for(int count=1 ;count<=10 ;count ++)
 {
        cout << table << " * " << count << " = " << table*count << endl;
 }
}