//Datatypes
#include "iostream";
using namespace std;

void main()
{
	
	setlocale(LC_ALL, "Rus");
	/*cout << true << "\n";
	cout << false << endl;
	cout << (bool) -0.00000001 << endl;
	cout << .3+.3+.3  << endl;*/
	cout << sizeof(int) <<endl;
	cout << INT_MIN << "..." << INT_MAX <<endl;
	cout << "0..." << UINT_MAX <<endl;

	cout << "----unsigned long long-----" << endl;
	cout << sizeof(unsigned long long) << endl;
	//cout << INT_MIN << "..." << INT_MAX << endl;
	cout << "0..." << ULLONG_MAX << endl;

	cout << "FLOAT" << endl;
	cout << sizeof(float) << endl;
	cout << FLT_MIN << "..." << FLT_MAX << endl;

	cout << "DOUBLE" << endl;
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "..." << DBL_MAX << endl;

	double price;
	double Price_of_Coffe;  //snake_case_style
	//case - �������
	//lower case - ������ �������
	//UPPER CASE - ������� �������
	
	cout << "������� ��������:  ";
	cin >> price;
	cout << price;

	//������������� - ��� ���������� ���������� �������� ����������. 
	//���������������� ���������� ����� ��� ��� ��� � ����� ����������
	//��������� �������� ����� ������ ������������� ��� � ������������� � ����������

	/*������������ ������ � ���������� ����� � ��������� ����������
	�������� �� ������ ����� ����������� ��� ���*/
}