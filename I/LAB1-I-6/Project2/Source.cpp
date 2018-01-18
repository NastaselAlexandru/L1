#include <iostream>

using namespace std;

int main()
{
	int suma1, suma2;
	int set_numere1[20], set_numere2[20];
	int i, numar_de_numere1, numar_de_numere2;

	cin >> numar_de_numere1 >> numar_de_numere2;
	suma1 = suma2 = 0;
	for (i = 1; i <= numar_de_numere1; i++)
	{
		cout << "set_numere1[" << i << "]=";
		cin >> set_numere1[i];
	}

	for (i = 1; i <= numar_de_numere2; i++)
	{
		cout << "set_numere2[" << i << "]=";
		cin >> set_numere2[i];
		suma2 = suma2 + set_numere2[i];
	}

	for (i = 1; i <= numar_de_numere1; i++)
		suma1 = suma1 + set_numere1[i];

	cout << suma1 << ' ' << suma2;

	return 0;
}