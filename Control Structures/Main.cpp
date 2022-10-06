#include <iostream>
using namespace std;
//#define TEMPERATURE  // объявление макроса// DEFINE - ОПРЕДЕЛИТЬ; if defined - если определено
//#define TARGET
//#define CALCULATOR_IF_ELSE
#define CALCULATOR_SWITCH

void main()
{
	setlocale(LC_ALL, "rus");

	/*
	УПРАВЛЯЮЩИЕ СТРУКТУРЫ МОЖНО ПОДЕЛИТЬ НА ДВА ТИПА :
	конструкции ветвления (if else)

	и циклы (while / do while / for)

	*/

	/* --- IF - ELSE
	Позволяет выполнить один из вариантов кода, в зависимости от вариантов

	*/

	// ******* IF - ELSE ******
#if defined TEMPERATURE
	short Temperature;

	cout << "Введите температуру на улице:" << endl;
	cin >> Temperature;

	if (Temperature > 0) cout << "На улице тепло" << endl;
	else cout << "На улице холодно" << endl;
#endif

#if defined TARGET

	int n;
	cout << "Введите число"; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "Цель поражена" << endl;
	}
	else
	{
		cout << "Вы промахнулись" << endl;
	}

#endif

#if defined CALCULATOR_IF_ELSE

	float Operand1, Operand2;
	char Operator;
	bool b_Error = 0;

	cout << "Введите выражение:"; cin >> Operand1 >> Operator >> Operand2;

	if (Operator == '+') Operand1 += Operand2;
	else if (Operator == '-') Operand1 -= Operand2;
	else if (Operator == '*') Operand1 *= Operand2;
	else if (Operator == '/') Operand1 /= Operand2;
	else
	{
		cout << "\nОшибка ввода оператора";
		b_Error = 1;
	}

	if (!b_Error) cout << "\nОтвет:" << Operand1;


#endif

	/* ****КОНСТРУКЦИЯ МНОЖЕСТВЕННОГО ВЫБОРА SWITCH****
	В отличии от IF, который позволяет выбрать один из двух вариантов кода, SWITCH позволяет
	выбрать один из множества вариантов в зависимости от некоторой переменной.
	SWITCH имеет следующий синтаксис:
	(var) - это переменная, по значению которой SWITCH выбирает вариант выполняемого кода,
	последовательно сравнивает с CONST1, CONST2, ... CONSTN  При совпадении он выполняет code1,
	code2, ...codeN,  до ключевого слова BREAK, которое прерывает выполнение кода и выходит
	за пределы конструкции SWITCH. Если BREAK отсутствует, то выполнится код, соответствующий следующему case и т.д. до тех
	пока не встретится BREAK или не закончится SWITCH.
	Переменная (var) и константы CONST1, CONST2 ... CONSTN могут быть лишь целочисленного либо
	символьного типа. Остальные типы данных SWITCH не понимает. В одной конструкции SWITCH
	не может двух case с одинаковыми константами.
	Код после метки defalt выполняется только в том случае, когда переменная (var) не совпала
	не с одной из констант.

	*/
#if defined CALCULATOR_SWITCH

	float Operand1, Operand2;
	char Operator;
	bool b_Error = 0;

	cout << "Введите выражение:"; cin >> Operand1 >> Operator >> Operand2;

	switch (Operator)
	{
	case '+': Operand1 += Operand2; break;
	case '-': Operand1 -= Operand2; break;
	case '*': Operand1 *= Operand2; break;
	case '/':
		if (Operand2 != 0) 	Operand1 /= Operand2;
		else cout << "\nОшибка: деленить на ноль нельзя!" << endl; b_Error = 1;  break;
		//case '%': Operand1 %= Operand2; break;
	default: cout << "\nОшибка: недопустимый оператор" << endl; b_Error = 1;  break;
	}

	if (!b_Error) cout << "\nОтвет:" << Operand1 << endl;

#endif



}