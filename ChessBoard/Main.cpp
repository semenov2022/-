#include <iostream>
#include <conio.h>		
using namespace std;

//#define CHESSBOARD



void main()
{
	setlocale(LC_ALL, "rus");

	int n;
	cout << "Введите количество звездочек : "; cin >> n;
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << (char)191;
		}
		cout << endl;
	}



}