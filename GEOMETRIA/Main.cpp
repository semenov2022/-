#include <iostream>
#include <conio.h>		
using namespace std;

#define SQUARE

void main()
{
	setlocale(LC_ALL, "rus");
	
	
#ifdef SQUARE
	int n;
	cout << "Введите количество звездочек : "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE


}