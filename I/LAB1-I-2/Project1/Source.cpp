#include <iostream>

using namespace std;
#define multiply(x,y) x=x*y;

int main()
{
	int numar_intreg_1, numar_intreg_2;
	float numar_real_1, numar_real_2;

	cin >> numar_intreg_1 >> numar_intreg_2 >> numar_real_1 >> numar_real_2;

	multiply(numar_intreg_1, numar_intreg_2);
	multiply(numar_real_1, numar_real_2);

	cout << numar_intreg_1 << ' ' << numar_intreg_2 << '\n' << numar_real_1 << ' ' << numar_real_2;

	return 0;
}