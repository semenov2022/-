#include <iostream>;
using namespace std;


void main()
{
/*������ 1. 
�������� ���������, ������� ����������� ��������� � ���������� ������� ����� � 
�������� ������.*/


	float fValue1;
	short iRubles, iKopecks;

	setlocale(LC_ALL, "Rus");
	cout << "�������������� ����� � �������� ������" << endl;
	cout << "������� ������� ����� -->";
	cin >> fValue1;
	fValue1 += 0.0001;
	iRubles = fValue1;								// �������� ����� �����
	iKopecks = (fValue1 - iRubles) * 100;			// �������� ������� �����

		
	cout << fValue1 << " ���. - ��� " << iRubles << "���. " << iKopecks << "���.";
	



/*������ 2.  
�������� ��������� ���������� ��������� �������, ��������� �� ���������� �������� � 
����������.*/

	float fPrice_of_�opybook1, fPrice_of_Pencil, fTotal_Cost1;
	short iQuantity_of_Copybook1, iQuantity_of_Pencil;

	cout << "\n\n���������� ��������� �������.\n������� �������� ������:" << endl;
	cout << "���� ������� (���.) -> ";
	cin >> fPrice_of_�opybook1;
	cout << "���������� �������� -> ";
	cin >> iQuantity_of_Copybook1;
	cout << "���� ��������� (���.) -> ";
	cin >> fPrice_of_Pencil;
	cout << "���������� ���������� -> ";
	cin >> iQuantity_of_Pencil;

	fTotal_Cost1 = fPrice_of_�opybook1 * iQuantity_of_Copybook1 + fPrice_of_Pencil * iQuantity_of_Pencil;

	cout << "\n��������� �������: " << fTotal_Cost1 << "���.";


/*������ 3.  
�������� ��������� ���������� ��������� �������, ��������� �� ���������� �������� � 
������ �� ���������� ������� � ���*/

	float fPrice_of_�opybook2, fPrice_of_Cover, fTotal_Cost2;
	short iQuantity_of_Set;

	cout << "\n\n���������� ��������� �������.\n������� �������� ������:" << endl;
	cout << "���� ������� (���.) -> ";
	cin >> fPrice_of_�opybook2;
	cout << "���� ������� (���.) -> ";
	cin >> fPrice_of_Cover;
	cout << "���������� ���������� (��.) -> ";
	cin >> iQuantity_of_Set;

	fTotal_Cost2 = (fPrice_of_�opybook2 + fPrice_of_Cover) * iQuantity_of_Set;

	cout << "\n��������� �������: " << fTotal_Cost2 << "���.";


/*������ 4.  
�������� ��������� ���������� ��������� ������� �� ���������� �� ���� (���� � �������). 
��������� ������� ��������: ���������� �� ���� (��); ���������� �������, ������� 
���������� ���������� �� 100 �� �������; ���� ������ ����� �������.*/


	float fFuel_Consumption, fPrice_of_Gasoline, fTotal_Cost3;
	short iDistance, z;

	cout << "\n\n���������� ��������� ������� �� ���� � �������." << endl;
	cout << "���������� �� ���� (��) ->";
	cin >> iDistance;
	cout << "������ ������� (������ �� 100 �� �������) ->";
	cin >> fFuel_Consumption;
	cout << "���� ����� ������� (���.) ->";
	cin >> fPrice_of_Gasoline;

	fTotal_Cost3 = fFuel_Consumption / 100 * iDistance * fPrice_of_Gasoline; //��������� ������ ������
	
	fTotal_Cost3 *= 100; //������ �������� ���������� ����������� ������ �� ���� ������ ����� �������
	z = fTotal_Cost3;
	fTotal_Cost3 = z;
	fTotal_Cost3 /= 100; //����� �������� ���������� ����������� ������ �� ���� ������ ����� �������

	cout << "\n������� �� ���� � ������� ��������� � " << fTotal_Cost3 << "���.";



}