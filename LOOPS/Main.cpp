


/* ******ЦИКЛЫ*****
Это управляющая структура, которая позволяет многократно выполнить часть кода,
то есть зацикливает выполнение какого-то кода. В языке С++ есть всего три цикла:
1) while - цикл с предусловием. "Сначала думает, потом делает."
2) do...while - цикл с постусловием. "Сначала делает, потом думает."
3) for - цикл на заданное число итераций
ИТЕРАЦИЯ - это однократное выполнение тела цикла.
ТЕЛО ЦИКЛА - это код, который нужно зациклить или же многократно выполнить.
Абсолютно у всех циклов есть УСЛОВИЕ.
Цикл WHILE проверяет условие перед каждой итерацией.
Если условие вернуло false, то итерация не будет выполнена и цикл завершается. Если при
первой же проверке условия оно вернёт false, то цикл не выполнится ни разу.
Цикл DO...WHILE сначала выполняет тело цикла и только после этого проверяет условие.
Если условие вернуло true, то тело цикла выполнится ещё раз до тех пор, пока условие
не вернёт false,  в таком случае тело цикла завершается.
*/

#define ENTER		13
#define ESCAPE		27
#define SPACE		32
#define UP_ARROW	72
#define DOWN_ARROW	80
#define LEFT_ARROW	75
#define RIGHT_ARROW	77


//#define EXAMPLE_WHILE1
//#define EXAMPLE_WHILE2
//#define TICKET_1	//мой вариант
//#define TICKET_2	//мой вариант
//#define TICKET_3	//НЕ мой вариант
//#define POLINDROM_1
//#define POLINDROM_2	//вариант преподавателя
//#define Escape27
//#define SHOOTER_IF_ELSE
//#define SHOOTER_SWITCH
//#define FACTORIAL
//#define FACTORIAL2	//вариант преподавателя
//#define DEGREE_OF_NUMBER
//#define DEGREE_OF_NUMBER2	//вариант преподавателя
//#define ASCII
//#define FIBONACHI_1
//#define FIBONACHI_2
//#define SIMPLE_NUM  //Простые числа
//#define SIMPLE_NUM2  //Простые числа


#include <iostream>
#include <conio.h>		//Здесь находится функция _getch()
using namespace std;




void main()
{
	setlocale(LC_ALL, "rus");

#ifdef	EXAMPLE_WHILE1
	int n; //количество итераций
	int i = 0; //счётчик цикла
	cout << "Введите количество итераций"; cin >> n;

	while (++i < n)

		cout << i << "Hello world" << endl;
	//++i;	
#endif
#ifdef	EXAMPLE_WHILE2
	int n; //количество итераций
	int i = 0; //счётчик цикла
	cout << "Введите количество итераций"; cin >> n;

	while (n)
	{
		cout << n-- << "\t";
		//n--;
	}
#endif
#ifdef TICKET_1
	int a, a1, a2, b1 = 0, b2 = 0;
	cout << "Введите шестизначный номер билета:"; cin >> a;
	if (a >= 1 && a < 1000000)
	{
		a1 = a / 1000;
		a2 = a % 1000;
		while (a1 || a2)
		{
			b1 += a1 % 10;
			a1 /= 10;

			b2 += a2 % 10;
			a2 /= 10; ;
		}
		if (b1 == b2) cout << "Это счатливый билет! :)" << endl;
		else	  cout << "Этот НЕ счастливый :(" << endl;
	}
	else cout << "Ошибка ввода";
#endif
#ifdef TICKET_2

	unsigned int a1, a2, a3, a4, a5, a6;


	cout << "Введите первую цифру номера билета:     "; cin >> a1;
	cout << "Введите вторую цифру номера билета:     "; cin >> a2;
	cout << "Введите третью цифру номера билета:     "; cin >> a3;
	cout << "Введите четвёртую цифру номера билета:  "; cin >> a4;
	cout << "Введите пятую цифру номера билета:      "; cin >> a5;
	cout << "Введите шестую цифру номера билета:     "; cin >> a6;

	if ((a1 + a2 + a3) == (a4 + a5 + a6)) cout << "\nЭто счатливый билет!:)";
	else cout << "\nЭтот НЕ счастливый :(";



#endif
#ifdef TICKET_3

	int a, b, c;
	cin >> a;
	b = a / 1000;
	c = a % 1000;
	if (b / 100 + (b / 10) % 10 + b % 10 == c / 100 + (c / 10) % 10 + c % 10)cout << "YES";
	else cout << "NO";

#endif
#ifdef POLINDROM
	int a, b, c = 0;
	cout << "Введите число:"; cin >> a;
	b = a;
	while (b)
	{
		c = c * 10 + (b % 10);
		b /= 10;
	}
	if (c == a) cout << "Это полиндром" << endl;
	else	  cout << "Это НЕ полиндром" << endl;
#endif
#ifdef POLINDROM_2
	int number, buffer, reverse = 0;
	cout << "Введите число:"; cin >> number;
	buffer = number; //сохраняем копию введенного пользователем числа, чтобы не потерять его в процессе вычислений
	while (buffer > 0)
	{
		reverse *= 10; //освобождаем место для добавления младшего разряда
		reverse += buffer % 10; //получаем меньший разряд числа
		buffer /= 10; //удаляем младший разряд
	}
	if (reverse == number) cout << "Это полиндром" << endl; //сравниваем два числа и выводим результат
	else	  cout << "Это НЕ полиндром" << endl;
#endif
#ifdef Escape27
	char key; //Эта переменная будет хранить код нажатой клавиши
	do
	{
		key = _getch(); //Функция _getch() ожидает нажатия клавиши и возвращает
		//ASCII-код нажатой клавиши
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование переменной "key" в тип int, для того
		//чтобы увидеть код нажатой клавиши

	} while (key != 27); // можно так: while (key != Escape);
#endif
	//TODO 01-09-22
#ifdef SHOOTER_IF_ELSE
	char key = 0;
	do
	{
		key = _getch();
		if (key == 'w' || key == 'W' || key == UP_ARROW)		cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)	cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)	cout << "Налево" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)	cout << "Направо" << endl;
		else if (key == SPACE)			cout << "Прыжок" << endl;
		else if (key == ENTER)			cout << "Огонь" << endl;
		else if (key == ESCAPE)		cout << "Выход" << endl;
		else if (key != -32)	cout << "Error" << endl;
	} while (key != ESCAPE);
#endif
#ifdef SHOOTER_SWITCH
	char key = 0;
	do
	{
		key = _getch();
		switch (key)
		{
		case 'w': case 'W': case UP_ARROW:		cout << "Вперед" << endl; break;
		case 's': case 'S': case DOWN_ARROW:	cout << "Назад" << endl; break;
		case 'a': case 'A': case LEFT_ARROW:	cout << "Налево" << endl; break;
		case 'd': case 'D': case RIGHT_ARROW:	cout << "Направо" << endl; break;
		case SPACE:		cout << "Прыжок" << endl; break;
		case ENTER:		cout << "Огонь" << endl; break;
		case ESCAPE:	cout << "Выход" << endl; break;
		case -32: break;
		}
	} while (key != ESCAPE);
#endif
#ifdef FACTORIAL
	int num, factorial;
	cout << "Введите число: "; cin >> num;
	if (num)
	{
		factorial = num;
		for (; num > 1;) factorial *= --num;
	}
	else factorial = 1; //Факториал нуля равен 1
	cout << "\nФакториал данного числа равен: " << factorial;
#endif 
#ifdef FACTORIAL2
	int num;
	double f = 1;
	cout << "Введите число: "; cin >> num;
	for (int i = 1; i <= num; i++)
	{
		f *= i;
		//cout << i << "i = ";
		//cout << f << endl;
	}
	//cout << endl;
	cout << "\nФакториал данного числа равен: " << f << endl;
#endif 
#ifdef DEGREE_OF_NUMBER
	int deg;
	double base, result;
	char key = 0;
	for (; key != 27;)
	{
		cout << "Введите основание степени: "; cin >> base;
		cout << "Введите целочисленный показатель степени: "; cin >> deg;

		if (deg > 0) //Если показатель степени - положительное целое число
		{
			result = base;
			for (; deg > 1; --deg)	result *= base;
			cout << "Ответ: " << result << endl;
		}
		else if (deg < 0) //Если показатель степени - отрицательное целое число
		{
			result = 1 / base;
			for (; deg < -1; ++deg)	result *= 1 / base;
			cout << "Ответ: " << result << endl;
		}
		else
		{
			result = 1; //Если показатель степени равен нулю
			cout << "Ответ: " << result << endl;
		}
		cout << "Для выхода нажмите (ESC) / Для продолжения - любую другую клавишу" << endl;
		key = _getch();
	}
#endif
#ifdef DEGREE_OF_NUMBER2
	double a, N = 1;
	int n;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите целочисленный показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)	N *= a;
	cout << N << endl;
#endif
	//TODO 08-09-22
#ifdef ASCII
	setlocale(LC_ALL, "C");		//Выставляем глобальную кодировку ASCII (чтобы выводить спец/символы
	for (int i = 0; i <= 255; i++)
	{
		cout << (char)i << " ";
		if (!(i % 16))	cout << endl;
	}
#endif
#ifdef FIBONACHI_1	//Пользователь задаёт ПРЕДЕЛ
	int num, a = 0, b = 1;
	cout << "Введите предел: "; cin >> num;
	for (int fibo = 0; fibo <= num;)
	{
		cout << fibo << "\t";
		fibo = a + b;
		a = b;
		b = fibo;
	}
#endif 
#ifdef FIBONACHI_2	//Пользователь задаёт КОЛИЧЕСТВО - ВАРИАНТ С КОНТРОЛЕМ ПРЕРЕПОЛНЕНИЯ переменной
	int num;
	unsigned long long  fibo = 0, a = 0, b = 1;
	cout << "Введите количество выводимых чисел: "; cin >> num;
	for (int i = 0; i != num; i++)
	{
		if (((fibo >= a) && fibo >= 0) || !fibo) cout << i + 1 << ")\t" << fibo << endl;
		else
		{
			cout << i + 1 << ")\t" << "Ошибка переполнения!" << endl;
			break;	//прерывание цикла при превышении допустимой области значений переменной
		}
		fibo = a + b;
		a = b;
		b = fibo;
	}
#endif 
#ifdef SIMPLE_NUM
	int num;
	cout << "Введите предел диапазона для вывода простых чисел: "; cin >> num;
	for (int i = 2; i <= num; i++)	//Цикл проверки всех чисел из выбранного пользователем диапазона
	{
		int a = 1;	//задание начального значения делителя
		for (int j = 1; j != 0;)  //Цикл проверки i-того числа из выбранного диапазона
		{
			a++;  //переход к следующему значению делителя
			j = i % a;		//определение остатка от деления i-того числа		
		}
		if (i == a) cout << i << "\t";	//Фильтрация простых чисел и вывод в поток cout
	}
#endif

#ifdef SIMPLE_NUM2
	int num;
	cout << "Введите предел диапазона для вывода простых чисел: "; cin >> num;
	for (int i = 2; i < num; i++)	//Цикл проверки всех чисел из выбранного пользователем диапазона
	{
		bool simple = 0;
		for (int j = 2; j < num; j++)  //Цикл проверки i-того числа из выбранного диапазона
		{
			if ((i % j) != 0)		//определение остатка от деления i-того числа
			{
				simple = 1;
				break;
			}
		}
		if (simple) cout << i << "\t";	//Фильтрация простых чисел и вывод в поток cout
	}
#endif // SIMPLE_NUM2

	for (int i = 1; i <= 10; i++)
	{
		cout << endl;
		for (int j = 1; j <= 10; j++)
		{
			if (i * j < 10) cout << " ";
			if (i * j < 100) cout << " ";
			cout << i * j << "\t";
		}

	}


}








