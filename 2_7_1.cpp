#include <iostream>
using namespace std;
int n, a;

int main()
{
	setlocale(LC_ALL, "");
	cin >> n;
	a = sqrt(n);
	if (a * a == n)
	{
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= a; j++)
			{
				cout << "* ";
			}
			cout << "\n";
		}
	}
	else
	{
		cout << "Из числа N не вычисляется корень.";
	}
	return 0;
}
