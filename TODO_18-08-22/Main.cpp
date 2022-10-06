#include <iostream>
using namespace std;

//#define CALCULATOR_IF_ELSE
//#define CALCULATOR_SWITCH
#define TICKET_1


void main()
{
	setlocale(LC_ALL, "rus");

	

#if defined CALCULATOR_IF_ELSE

	float Operand1, Operand2;
	char Operator;
	bool b_Error = 0;

	cout << "������� ������� �������������� ���������:"; cin >> Operand1 >> Operator >> Operand2;

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

#if defined CALCULATOR_SWITCH

	float Operand1, Operand2;
	char Operator;
	bool b_Error = 0;

	cout << "������� ������� �������������� ���������:"; cin >> Operand1 >> Operator >> Operand2;

	switch (Operator)
	{
	case '+': Operand1 += Operand2; break;
	case '-': Operand1 -= Operand2; break;
	case '*': Operand1 *= Operand2; break;
	case '/':
		if (Operand2 != 0)
		{
			Operand1 /= Operand2;
			b_Error = 0;  break;
		}
		else
		{
			cout << "\n������: ������ �� ���� ������!" << endl;
			b_Error = 1;  break;
		}
	default: cout << "\n������: ������������ ��������" << endl; b_Error = 1;  break;
	}
	if (!b_Error) cout << "\n�����:" << Operand1 << endl;

#endif

#ifdef TICKET_1

	int a, a1, a2, b1 = 0, b2 = 0;


	cout << "������� ������������ ����� ������:"; cin >> a;

	if (a >= 1 && a < 1000000)
	{
		a1 = a / 1000;
		a2 = a % 1000;

		//cout << "\na1 = " << a1 << "a2 = " << a2 << endl;


		while (a1 > 0 || a2 > 0)
		{
			b1 = b1 + (a1 % 10);
			a1 /= 10;

			b2 = b2 + (a2 % 10);
			a2 /= 10;
			
		}
		//cout << "\na1 = " << b1 << "a2 = " << b2 << endl;

		if (b1 == b2) cout << "��� ��������� �����! :)" << endl;
		else	  cout << "���� �� ���������� :(" << endl;
	}
	else cout << "������ �����";

#endif

}