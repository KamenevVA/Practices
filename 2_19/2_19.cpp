#include <iostream>
using namespace std;

int n,sum;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0) sum -= i;
        else sum += i;
    }
    cout << sum;
    return 0;
}
