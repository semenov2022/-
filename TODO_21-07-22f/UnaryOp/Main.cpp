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
���� ���������� ����� ��������� ��� ��������� �� �� 1, � �� ������ ��������,
�� ���������� ��������� ������������. ��� ������������� ��� ����, ����� ���������
��������� ����:
� = � + b


*/