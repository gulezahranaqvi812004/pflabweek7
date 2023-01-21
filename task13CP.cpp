#include <iostream>
using namespace std;
void print_percentage(int range);
main()
{
   int range;

   cout << "Enter range: ";
   cin >> range;
   print_percentage( range);


}
void print_percentage(int range)
{
   float counter_1=0;
   float counter_2=0;
   float counter_3=0;
   float counter_4=0;
   float counter_5=0;
   float p1;
   float p2;
   float p3;
   float p4;
   float p5;
   int number;
   for (int count=1 ; count <= range ; count++)
   {
     cout << "Enter a number: " ;
     cin >> number;
     if(number<200)
     {
        counter_1++;
     }
     else if(number>=200 && number<400)
     {
       counter_2++;
     }
     else if(number>=400 && number<600)
     {
         counter_3++;
     }
     else if(number>=600 && number<800)
     {
         counter_4++;
     }
     else if(number>=800 && number<1000)
     {
         counter_5++;
     }
   }
   
   p1=(counter_1/range)*100;
   p2=(counter_2/range)*100;
   p3=(counter_3/range)*100;
   p4=(counter_4/range)*100;
   p5=(counter_5/range)*100;
   cout << p1 << " % "<< endl << p2 <<   " % "  << endl << p3 <<  " % "   << endl << p4 << " % "  <<endl << p5  << " % "  ;
   
}