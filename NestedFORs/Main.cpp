#include <iostream>
#include <conio.h>		//Здесь находится функция _getch()
using namespace std;

/*Пока не выполнятся все итерации вложенного ФОРа не пройдёт даже одна
итерация внешнего ФОРа. Счётчик j вложенного ФОРа заново создается при каждой итерации
внешнего ФОРа и удаляется из памяти при завершении всех итераций внутреннего ФОРа,
а при следующей итерации внешнего ФОРа счётчик j будет создан заново.
*/

//#define MULTIPLICATION_TABLE
//#define PIFAGOR_TABLE
//#define GEOMETRIA


void main()
{
	setlocale(LC_ALL, "rus");

#ifdef MULTIPLICATION_TABLE

	for (int i = 1; i <= 10; i++)
	{
		//счётчика j ЕЩЁ нет
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);	//это свойство задаёт ширину поля вывода в знакопозициях.
			//если вывод был меньше заданной ширины, то следующее значение выведется
			//за пределами занной ширины. В данном случае 5 знакопозиций.
			//если выводимое значение требует больше знакопозиций, то оно займёт больше
			//места на экране
			//cout.width(x); неявно включает выравнивание по правому краю поля 
			// заданной ширины cout << right;
			//по умолчанию вывод выравнивается по левому краю cout << left;

			/*if (i < 10)	cout << " ";
			cout << i << " * ";
			if (j < 10)	cout << " ";
			cout << j << " = ";
			if (i * j < 100)	cout << " ";
			if (i * j < 10)	cout << " ";*/
			cout << i * j << endl;
		}
		//счётчика j УЖЕ нет
	}

#endif // MULTIPLICATION_TABLE

#ifdef PIFAGOR_TABLE
	for (int i = 1; i <= 10; i++)
	{
		cout << endl;
		for (int j = 1; j <= 10; j++)
		{
			if (i * j < 10) cout << " ";
			if (i * j < 100) cout << " ";
			cout << i * j << "\t";
		}

	}
#endif // PIFAGOR_TABLE

#ifdef GEOMETRIA
	int m;
	bool sign = 0;
	cout << "Введите размер фигуры: " << endl;	cin >> m;

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
			if (!sign)	cout << "-";
			sign = !sign;
		}
		cout << endl;
	}
#endif // GEOMETRIA
}