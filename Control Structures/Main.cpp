#include <iostream>
using namespace std;
//#define TEMPERATURE  // ���������� �������// DEFINE - ����������; if defined - ���� ����������
//#define TARGET
//#define CALCULATOR_IF_ELSE
#define CALCULATOR_SWITCH

void main()
{
	setlocale(LC_ALL, "rus");

	/*
	����������� ��������� ����� �������� �� ��� ���� :
	����������� ��������� (if else)

	� ����� (while / do while / for)

	*/

	/* --- IF - ELSE
	��������� ��������� ���� �� ��������� ����, � ����������� �� ���������

	*/

	// ******* IF - ELSE ******
#if defined TEMPERATURE
	short Temperature;

	cout << "������� ����������� �� �����:" << endl;
	cin >> Temperature;

	if (Temperature > 0) cout << "�� ����� �����" << endl;
	else cout << "�� ����� �������" << endl;
#endif

#if defined TARGET

	int n;
	cout << "������� �����"; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "���� ��������" << endl;
	}
	else
	{
		cout << "�� ������������" << endl;
	}

#endif

#if defined CALCULATOR_IF_ELSE

	float Operand1, Operand2;
	char Operator;
	bool b_Error = 0;

	cout << "������� ���������:"; cin >> Operand1 >> Operator >> Operand2;

	if (Operator == '+') Operand1 += Operand2;
	else if (Operator == '-') Operand1 -= Operand2;
	else if (Operator == '*') Operand1 *= Operand2;
	else if (Operator == '/') Operand1 /= Operand2;
	else
	{
		cout << "\n������ ����� ���������";
		b_Error = 1;
	}

	if (!b_Error) cout << "\n�����:" << Operand1;


#endif

	/* ****����������� �������������� ������ SWITCH****
	� ������� �� IF, ������� ��������� ������� ���� �� ���� ��������� ����, SWITCH ���������
	������� ���� �� ��������� ��������� � ����������� �� ��������� ����������.
	SWITCH ����� ��������� ���������:
	(var) - ��� ����������, �� �������� ������� SWITCH �������� ������� ������������ ����,
	��������������� ���������� � CONST1, CONST2, ... CONSTN  ��� ���������� �� ��������� code1,
	code2, ...codeN,  �� ��������� ����� BREAK, ������� ��������� ���������� ���� � �������
	�� ������� ����������� SWITCH. ���� BREAK �����������, �� ���������� ���, ��������������� ���������� case � �.�. �� ���
	���� �� ���������� BREAK ��� �� ���������� SWITCH.
	���������� (var) � ��������� CONST1, CONST2 ... CONSTN ����� ���� ���� �������������� ����
	����������� ����. ��������� ���� ������ SWITCH �� ��������. � ����� ����������� SWITCH
	�� ����� ���� case � ����������� �����������.
	��� ����� ����� defalt ����������� ������ � ��� ������, ����� ���������� (var) �� �������
	�� � ����� �� ��������.

	*/
#if defined CALCULATOR_SWITCH

	float Operand1, Operand2;
	char Operator;
	bool b_Error = 0;

	cout << "������� ���������:"; cin >> Operand1 >> Operator >> Operand2;

	switch (Operator)
	{
	case '+': Operand1 += Operand2; break;
	case '-': Operand1 -= Operand2; break;
	case '*': Operand1 *= Operand2; break;
	case '/':
		if (Operand2 != 0) 	Operand1 /= Operand2;
		else cout << "\n������: �������� �� ���� ������!" << endl; b_Error = 1;  break;
		//case '%': Operand1 %= Operand2; break;
	default: cout << "\n������: ������������ ��������" << endl; b_Error = 1;  break;
	}

	if (!b_Error) cout << "\n�����:" << Operand1 << endl;

#endif



}