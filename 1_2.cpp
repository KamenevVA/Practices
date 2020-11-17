#include <iostream>
using namespace std;
float a, b;
int main()
{
    setlocale(LC_ALL, "");
    cin >> a >> b;
    if (a == 0)
    {
        cout << 0;
    }
    else if (b == 0)
        {
            cout << "Такое, к сожалению, невозможно(";
        }
    if (a != 0 && b != 0)
    {
        cout << a / b;
    }
    return 0;
}
