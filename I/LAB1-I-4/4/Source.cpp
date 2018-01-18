#include <iostream>

using namespace std;

int main()
{
	int nr1, nr2;
	cin >> nr1 >> nr2;
	nr1 = nr1 + nr2;
	cout << nr1 << '\n';
	nr1 -= nr2;
	cout << nr1 << '\n';
	nr2 *= nr1;
	cout << nr2 << '\n';
	nr2 = nr2 / nr1;
	cout << nr2 << '\n';
	cout << nr1 / nr2 / 1.0 << '\n';
	if (nr1 > nr2)
		cout << nr1%nr2 << '\n';
	else
		cout << nr2%nr1 << '\n';
	return 0;
}
