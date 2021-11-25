#include "zagolovok.h"
#include <iostream>
using namespace std;
void menu()
{
	cout << "Choose the operation : " << endl;
	cout << "1 - Zapovnyty masyv randomno." << endl;
	cout << "2 - Zapovnyty masyv vruchnu." << endl;
	cout << "3 - Vyvesty masyv." << endl;
	cout << "4 - Sortyvannya za zrostannyam." << endl;
	cout << "5 - Sortyvannya za spadannyam." << endl;
	cout << "6 - Yakih chisel bilwe." << endl;
	cout << "7 - Suma tsifr." << endl;
	cout << "8 - Zvorotni tsifri." << endl;
	cout << "9 - Parniy i neparniy masiv." << endl;
	cout << "10 - Stysnennya masivy." << endl;

}

void arr_rand(int a[], int n)
{
	cout << "Array : " << endl;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << " ";
	}
}



void input(int a[], int n)
{
	cout << "Array : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void arr_vr(int a[], int n)
{
	cout << "Array : " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void spad(int a[], int n)
{
	int t;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
		cout << a[i] << " ";
	}
}

void zrost(int a[], int n)
{
	int t;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
		cout << a[i] << " ";
	}
}

void parn(int a[], int n)
{
	int p = 0, np = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			p++;
		}
		else
		{
			np++;
		}
	}
	if (p > np)
	{
		cout << "Parnih bilwe.";

	}
	if (np > p)
	{
		cout << "Neparnih bilwe.";
	}
	else if (np == p)
	{
		cout << "Rivno.";
	}

}
int sum(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += (a[i] / 10) + (a[i] % 10);
	}
	cout << "Suma tsifr : " << s;
	return s;

}
void zvorot(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] / 10 < 1)
		{
			cout << a[i] << " ";
		}
		if (a[i] / 10 >= 1)
		{
			cout << a[i] % 10 << a[i] / 10 << " ";
		}
	}
}

void twoarr(int a[], int n)
{
	int p = 0, np = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			p++;
		}
		else
		{
			np++;
		}
	}
	int* b = new int[p];
	int* c = new int[np];
	cout << "Array B(parniy) :" << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[i] = a[i];
			cout << b[i] << " ";
		}
	}
	cout << endl;
	cout << "Array C(neparniy) :" << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			c[i] = a[i];
			cout << c[i] << " ";
		}
	}
}

void stysnennya(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i + 1] == a[i])
		{
			for (int j = i; j < n; j++)
			{
				a[j] = a[j + 1] + a[j];
			}
			n--;
		}


		cout << a[i] << " ";

	}
}
