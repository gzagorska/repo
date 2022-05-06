#include <iostream>
using namespace std;

int main()
{
	int n;
	int f0 = 0;
	int f1 = 1;
	int f;

	cout << "Podaj dlugosc ciagu Fibonacciego: ";
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		if (i > 1)
		{
			f = f0 + f1;
			f0 = f1;
			f1 = f;
		}
		else
		{
			f = i;
		}

		cout << f << " ";

	}


}