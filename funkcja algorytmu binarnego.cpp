#include <iostream>
using namespace std;

int  Funkcja(int tab[], int szukana);
int main()
{
	int szukana;
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

	cout << "Podaj liczbe, ktora chcesz znalezc: ";
	cin >> szukana;

	if (Funkcja(tab, szukana) == -1)
	{
		cout << "Nie znaleziono";
	}

	else
	{
		cout << "Liczba "<<szukana<<" wystepuje w zbiorze o indeksie "<<Funkcja(tab, szukana);

	}


}
int  Funkcja(int tab[], int szukana)
{
	int l = 0;
	int p = 15;
	int sr = (l + p) / 2;


	while(l <= p)
	{
		if (tab[sr] == szukana)
		{
			return sr;
		}

		if (tab[sr] > szukana)
		{
			p = sr - 1;
		}

		else
		{
			l = sr + 1;
		}
		
		sr = (l + p) / 2;
	}

	return -1;

}
