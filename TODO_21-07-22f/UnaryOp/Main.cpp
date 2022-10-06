#include <iostream>;
using namespace std;



void main()
{
	setlocale(LC_ALL, "Rus");
	
	int i = 3;
	i = i++ + 1 + ++i *= 2;
	cout << i << endl;

}
/*COMPAUND ASSIGMENTS
Если переменную нужно увеличить или уменьшить не на 1, а на другое значение,
то используют составные присваивания. Они предназначены для того, чтобы упростить
выражения вида:
а = а + b


*/