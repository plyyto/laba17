#include <iostream>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include "functions.cpp"
using namespace std;


int main()
{
	srand(time(NULL));
	int n;
	cout << "Array size : ";
	cin >> n;
	int* a = new int[n];
	menu();
	int x=1;
	while (x!=5)
	{
		cin >> x;
		switch (x)
		{
		case 1: arr_rand(a, n); cout << endl; break;
		case 2: arr_vr(a, n); cout << endl; break;
		case 3: input(a, n); cout << endl; break;
		case 4: zrost(a, n); cout << endl; break;
		case 5: spad(a, n); cout << endl; break;
		case 6: parn(a, n); cout << endl; break;
		case 7: sum(a, n); cout << endl; break;
		case 8: zvorot(a, n); cout << endl; break;
		case 9: twoarr(a, n); cout << endl; break;
		case 10: stysnennya(a, n); cout << endl; break;
		}
		
	}
	
	
		


		return 0;
	
}
