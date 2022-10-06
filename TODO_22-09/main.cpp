#include <iostream>
#include <conio.h>		
using namespace std;

//#define PIFAGOR_TABLE
//#define GEOMETRIA
//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3


void main()
{
	setlocale(LC_ALL, "rus");

#ifdef PIFAGOR_TABLE
	cout << "ТАБЛИЦА ПИФАГОРА" << endl;
	for (int i = 1; i <= 9; i++)
	{
		cout << "\n\n";
		for (int j = 1; j <= 9; j++)
		{
			if (i * j < 10) cout << " ";
			if (i * j < 100) cout << " ";
			cout << i * j << "\t";
		}

	}
	cout << "\n\n\n";
#endif // PIFAGOR_TABLE

#ifdef GEOMETRIA
	int m;
	bool sign = 0;
	cout << "Введите размер фигуры: ";	cin >> m; 	cout << endl;

	// 0)
	cout << endl << "0)" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	// 1)
	cout << endl << "1)" << endl;
	for (int i = 0, M = 1; i < m; i++, M++)
	{
		for (int j = 0; j < M; j++)		cout << "*";
		cout << endl;
	}
	// 2)
	cout << endl << "2)" << endl;
	for (int i = 0, M = m; i < m; i++, M--)
	{
		for (int j = 0; j < M; j++)	cout << "*";
		cout << endl;
	}
	// 3)
	cout << endl << "3)" << endl;
	for (int i = 0, M = m; i < m; i++, M--)
	{
		for (int j = 0; j < M; j++)
		{
			if (!j)		for (int k = 0; k < m - M; k++)		cout << " ";
			cout << "*";
		}
		cout << endl;
	}
	// 4)
	cout << endl << "4)" << endl;
	for (int i = 0, M = 1; i < m; i++, M++)
	{
		for (int j = 0; j < M; j++)
		{
			if (!j)		for (int k = 0; k < m - M; k++)		cout << " ";
			cout << "*";
		}
		cout << endl;
	}
	// 5)
	cout << endl << "5)" << endl;
	for (int i = 0, M = 1; i < m; i++, M++)
	{
		for (int j = 0; j < m - M; j++)	cout << " ";
		cout << "/";
		for (int k = 0; k < 2 * M; k++)	if (k > 1) cout << " ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0, M = 1; i < m; i++, M++)
	{
		for (int j = 0; j < M; j++)	if (j > 0)	cout << " ";
		cout << "\\";
		for (int k = 0; k < 2 * (m - M); k++)	 cout << " ";
		cout << "/";
		cout << endl;
	}
	// 6)
	cout << endl << "6)" << endl;
	for (int i = 0; i < m; i++)
	{
		if (m % 2 == 0)	sign = !sign;
		for (int j = 0; j < m; j++)
		{
			if (sign)	cout << "+";
			else		cout << "-";
			sign = !sign;
		}
		cout << endl;
	}
	cout << "\n\n\n";
#endif // GEOMETRIA


//----------------------------РАЗБОР ДОМАШКИ-------------------------------


#if SQUARE
	int n;
	cout << "Введите количество звездочек : "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	int n;
	cout << "Введите количество звездочек : "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	int n;
	cout << "Введите количество звездочек : "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	int n;
	cout << "Введите количество звездочек : "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TRIANGLE_3
	
	
	/*int n;
	cout << "Введите количество звездочек : "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}*/
	setlocale(LC_ALL, "C");		//Выставляем глобальную кодировку ASCII (чтобы выводить спец/символы
	for (int i = 128; i <= 255; i++)
	{
		cout << i<< "\t"<< (char)i << " ";
		cout << endl <<endl;
	}
}