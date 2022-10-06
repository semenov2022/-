#include <iostream>;
using namespace std;



void main()
{
	setlocale(LC_ALL, "Rus");


/*��������� �������� sizeof() � ���������������� Visual Studio
   ������� �� ����� ����� ���������� ������ � ��������� ����������� ��������
   ��� ������������� ����� ������.*/

	
	cout << "������� 2. ��������� �������� sizeof() � ���������������� Visual Studio ������� �� ����� ����� ���������� ������ � ��������� ����������� �������� ��� ������������� ����� ������." << endl <<endl;
	cout << "��� unsigned short:" << endl;
	cout << sizeof(unsigned short) << endl;
	cout << "0..." << USHRT_MAX << endl << endl;
	cout << "��� signed short:" << endl;
	cout << sizeof(signed short) << endl;
	cout << SHRT_MIN << "..." << SHRT_MAX << endl << endl;

	cout << "��� unsigned long:" << endl;
	cout << sizeof(unsigned long) << endl;
	cout << "0..." << ULONG_MAX << endl << endl;
	cout << "��� signed long:" << endl;
	cout << sizeof(signed long) << endl;
	cout << LONG_MIN << "..." << LONG_MAX << endl << endl;

	cout << "��� unsigned long long:" << endl;
	cout << sizeof(unsigned long long) << endl;
	cout << "0..." << ULLONG_MAX << endl << endl;
	cout << "��� signed long long:" << endl;
	cout << sizeof(signed long long) << endl;
	cout << LLONG_MIN << "..." << LLONG_MAX << endl << endl;

	cout << "��� unsigned int:" << endl;
	cout << sizeof(unsigned int) << endl;
	cout << "0..." << UINT_MAX << endl << endl;
	cout << "��� signed int:" << endl;
	cout << sizeof(signed int) << endl;
	cout << INT_MIN << "..." << INT_MAX << endl << endl;







/*    *�������� ������� ��� ����������:          */

cout << "������� 3. �������� ������� ��� ����������:" << endl << endl;

int a = 2;
int b = 3;
cout << "a = " << a << "\t" << "b = " << b << endl;
a += b;
b = a-b;
a -= b;
cout << "a = " << a << "\t" << "b = " << b << endl <<endl;




}