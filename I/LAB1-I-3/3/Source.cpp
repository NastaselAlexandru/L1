using namespace std;

int main()
{
	char nume[30];
	char prenume[30];
	int i;

	cout << "numele este:";
	cin >> nume;
	cout << "prenumele este:";
	cin >> prenume;

	for (i = 0; i < strlen(nume); i++)
		if (nume[i] >= 65 && nume[i] <= 95)
			nume[i] += 32;
		else
			nume[i] -= 32;
	for (i = 0; i<strlen(prenume); i++)
		if (prenume[i] >= 65 && prenume[i] <= 95)
			prenume[i] += 32;
		else
			prenume[i] -= 32;
	cout << nume << ' ' << prenume;
	return 0;
}