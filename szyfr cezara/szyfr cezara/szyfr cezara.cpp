#include <iostream>
using namespace std;

void  Funkcja(char tab[], int klucz)
{
	int dl;
	dl = strlen(tab);
	if (!(klucz >= -26 and klucz <= 26))
	{
		return;
	}
	int i;
	int z;
	if (klucz >= 0)
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + klucz <= 'z')
			{
				tab[i] += klucz;
			}
			else
			{
				tab[i] = tab[i] + klucz - 26;
			}

		}


	}
	else
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + klucz >= 'a')
			{
				tab[i] += klucz;
			}
			else
			{
				tab[i] = tab[i] + klucz + 26;
			}

		}
	}
}

int main()
{
	int klucz;
	char tab[200];
	int i;
	cout << "Podaj wyraz składajacy sie z malych liter: ";
	cin >> tab;
	cout << "Podaj klucz z przedzialu [-26..26]: ";
	cin >> klucz;
	Funkcja(tab, klucz);
	cout << "Po szfrowaniu: " << tab << "\n";
	Funkcja(tab, -klucz);
	cout << "Po rozszfrowaniu: " << tab << "\n";


}
