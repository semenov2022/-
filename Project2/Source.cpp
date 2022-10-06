#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");

	int iPolindrom, iDigit, iReverse = 0, iNum;
	cout << "Enter value:   ";  cin >> iPolindrom;
	iNum = iPolindrom;

	do
	{
		iDigit = iNum % 10;
		iReverse = (iReverse * 10) + iDigit;
		iNum = iNum / 10;
		
	} 
	while (iNum != 0);

	if (iReverse == iPolindrom)
	{
		cout << "Это полиндром!" << endl;
	}
	else cout << "Это НЕ полиндром!" << endl;

}