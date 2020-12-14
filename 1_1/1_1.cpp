#include <iostream>
using namespace std;
int a, b, c;
int maximum;
int main()
{
    cin >> a >> b >> c;
    if (a > b)
    {
        maximum = a;
    }
    else if (b > c)
    {
        maximum = b;
    }
    else
    {
        maximum = c;
    }
    cout << maximum;
    return 0;
}
