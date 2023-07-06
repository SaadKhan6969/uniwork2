#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
   
    cout << "Enter Value Of 1st num";
    cin >> a >>b>>c;
  
    int small = a;
    int big = a;
    if (b < small)
    {
         small =b;
    };
    if (c < small)
    {
           small =c;;
    };
    if (b > big)
    {
       big= b;
    };
    if (c > big)
    {
       big= c;
    };
    cout << "Smallest no is " << small;
    cout << "Big no is " << big;
    return 0;
}