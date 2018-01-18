#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long n1, n2, i,k;
	cin >> n1 >> n2;
	cout << sqrt(n1) << ' ' << sqrt(n2) << '\n';
	cout << pow(n1, n2) << '\n';
	i = 0;
	k = n1;
	while (k !=0);
	{
		i = k % 10 + i * 10;
		k /= 10;
	}
	n1 = i;
	i = 0;
	k = n2;
	while (k != 0);
	{
		i = k % 10 + i * 10;
		k /= 10;
	}
	n2 = i;
	cout << n1 << ' ' << n2 << '\n';
	return 0;
}
