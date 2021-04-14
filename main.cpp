#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	// deklarasi array sebanyak 5 angka
	int nilai[50];
	int data;
	int i;

	cout << "Input banyak NILAI : ";
	cin >> data;

	cout << "Masukkan nilai yang akan di urutkan  \n";
	for (i = 0; i < data; i++)
	{
		cout << "angka [" << i << "] = ";
		cin >> nilai[i];
	}

	// menampilkan nilai sebelum diurutkan
	cout << "Sebelum diurutkan : ";
	for (int i = 0; i < data; i++)
	{
		cout << nilai[i] << ' ';
	}
	cout << endl;

	// --------------------------------------------------- pengurutan nilai ---------------------------------------------
	int jmin;

	int temp;

	// uj disini sebagai pivot nya
	int uj = data - 1 ;
	for (int j = 0; j < data; j++)
	{
		jmin = 0;
		for (int k = 1; k <= uj; k++)
		{
			// intinya ini adalah pengkondisian untuk menentukan angka terkecilnya
			if (nilai[k] < nilai[jmin])
			{
				jmin = k;
			}
		}
		// ini untuk pertukarannya, sesuai penjelasan variabel temp
		temp = nilai[uj];
		nilai[uj] = nilai[jmin];
		nilai[jmin] = temp;
		uj--;

		/*cout << "hasil  proses ke-" << j + 1 << " = ";
		for (int k = 0; k < data; k++)
		{
			cout << nilai[k] << " ";
		} */
		cout << endl;
	}

	// menampilkan nilai setelah diurutkan
	cout << "Setelah diurutkan : ";
	for (int i = 0; i < data; i++)
	{
		cout << nilai[i] << ' ';
	}
	cout << endl << endl;


	cout << "Nilai Yang dicari  :";
	int cari;
	cin >> cari;

	int left = 0, right = data - 1, mid;
	bool ketemu = 0;

	while (true)
	{
		mid = (left + right) / 2;

		if (nilai[mid] == cari)
		{
			ketemu = 1;
			break;
		}
		else if (nilai[mid] < cari)
		{
			right = mid - 1;
		}
		else if (left > right)
		{
			break;
		}
		else
		{
			left = mid + 1;
		}
	}

	if (ketemu == 1)
	{
		cout << "NILAI " << cari << " YANG DICARI ADA DALAM ARRAY" << endl;
	}
	else
	{
		cout << "NILAI " << cari << " YANG DICARI TIDAK ADA DALAM ARRAY" << endl;
	}

	cout << "BINARY SEARCH SELESAI" << endl;

	int _getch();

	return 0;
}