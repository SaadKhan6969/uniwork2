#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "ENter starting Num Bigger Than 10 And Ending Num Below Than 50";
    cin >> a >> b;
    for (int i = a; i < b; i++)
    {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        {
            continue;
        }
        else
        {
            cout << i << " ";
        }
    }
    return 0;
}