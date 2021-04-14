#include <iostream>
#include <string>

using namespace std;

int main()
{
	string kata;
	int i, j, k;

	cout << "Input kata : ";
	cin >> kata;
	cout << endl;


	cout  << endl;
	cout << "susunan huruf : ";
	for (i = 0; i < kata.length(); i++)
	{
		cout << kata[i] << ' ';
	}
	cout << endl;
	cout  << endl;

	cout << "input huruf yang ingin dicari : ";
	char huruf;
	cin >> huruf;
	cout << endl;

	int hitung = 0;
	int l[50];
	for (i = 0; i < kata.length(); i++)
	{
		if (kata[i] == huruf)
		{
			hitung++;
			l[hitung - 1] = i;
		}
	}

	cout << "huruf " << huruf << " ditemukan sebanyak " << hitung << " kali," << endl;
	cout << "yaitu pada huruf ke : ";

	for (i = 0; i < hitung; i++)
	{
		cout << l[i] + 1 << "\t ";
	}
	cout << endl;
	cout  << endl;


	// ngurutin huruf
	int m, temp, u = 0;

	for (j = 0; j < kata.length(); j++)
	{
		m = kata.length() - 1;
		for (k = u; k <= kata.length() - 2; k++)
		{
			if (kata[k] < kata[m])
			{
				m = k;
			}
		}
		temp = kata[u];
		kata[u] = kata[m];
		kata[m] = temp;
		u++;
	}
	cout << "urutan huruf : ";
	for (i = 0; i < kata.length(); i++)
	{
		cout << kata[i] << ' ';
	}
	cout << endl;
	cout  << endl;

	return 0;
}