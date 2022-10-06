


/* ******�����*****
��� ����������� ���������, ������� ��������� ����������� ��������� ����� ����,
�� ���� ����������� ���������� ������-�� ����. � ����� �++ ���� ����� ��� �����:
1) while - ���� � ������������. "������� ������, ����� ������."
2) do...while - ���� � ������������. "������� ������, ����� ������."
3) for - ���� �� �������� ����� ��������
�������� - ��� ����������� ���������� ���� �����.
���� ����� - ��� ���, ������� ����� ��������� ��� �� ����������� ���������.
��������� � ���� ������ ���� �������.
���� WHILE ��������� ������� ����� ������ ���������.
���� ������� ������� false, �� �������� �� ����� ��������� � ���� �����������. ���� ���
������ �� �������� ������� ��� ����� false, �� ���� �� ���������� �� ����.
���� DO...WHILE ������� ��������� ���� ����� � ������ ����� ����� ��������� �������.
���� ������� ������� true, �� ���� ����� ���������� ��� ��� �� ��� ���, ���� �������
�� ����� false,  � ����� ������ ���� ����� �����������.
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
//#define TICKET_1	//��� �������
//#define TICKET_2	//��� �������
//#define TICKET_3	//�� ��� �������
//#define POLINDROM_1
//#define POLINDROM_2	//������� �������������
//#define Escape27
//#define SHOOTER_IF_ELSE
//#define SHOOTER_SWITCH
//#define FACTORIAL
//#define FACTORIAL2	//������� �������������
//#define DEGREE_OF_NUMBER
//#define DEGREE_OF_NUMBER2	//������� �������������
//#define ASCII
//#define FIBONACHI_1
//#define FIBONACHI_2
//#define SIMPLE_NUM  //������� �����
//#define SIMPLE_NUM2  //������� �����


#include <iostream>
#include <conio.h>		//����� ��������� ������� _getch()
using namespace std;




void main()
{
	setlocale(LC_ALL, "rus");

#ifdef	EXAMPLE_WHILE1
	int n; //���������� ��������
	int i = 0; //������� �����
	cout << "������� ���������� ��������"; cin >> n;

	while (++i < n)

		cout << i << "Hello world" << endl;
	//++i;	
#endif
#ifdef	EXAMPLE_WHILE2
	int n; //���������� ��������
	int i = 0; //������� �����
	cout << "������� ���������� ��������"; cin >> n;

	while (n)
	{
		cout << n-- << "\t";
		//n--;
	}
#endif
#ifdef TICKET_1
	int a, a1, a2, b1 = 0, b2 = 0;
	cout << "������� ������������ ����� ������:"; cin >> a;
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
		if (b1 == b2) cout << "��� ��������� �����! :)" << endl;
		else	  cout << "���� �� ���������� :(" << endl;
	}
	else cout << "������ �����";
#endif
#ifdef TICKET_2

	unsigned int a1, a2, a3, a4, a5, a6;


	cout << "������� ������ ����� ������ ������:     "; cin >> a1;
	cout << "������� ������ ����� ������ ������:     "; cin >> a2;
	cout << "������� ������ ����� ������ ������:     "; cin >> a3;
	cout << "������� �������� ����� ������ ������:  "; cin >> a4;
	cout << "������� ����� ����� ������ ������:      "; cin >> a5;
	cout << "������� ������ ����� ������ ������:     "; cin >> a6;

	if ((a1 + a2 + a3) == (a4 + a5 + a6)) cout << "\n��� ��������� �����!:)";
	else cout << "\n���� �� ���������� :(";



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
	cout << "������� �����:"; cin >> a;
	b = a;
	while (b)
	{
		c = c * 10 + (b % 10);
		b /= 10;
	}
	if (c == a) cout << "��� ���������" << endl;
	else	  cout << "��� �� ���������" << endl;
#endif
#ifdef POLINDROM_2
	int number, buffer, reverse = 0;
	cout << "������� �����:"; cin >> number;
	buffer = number; //��������� ����� ���������� ������������� �����, ����� �� �������� ��� � �������� ����������
	while (buffer > 0)
	{
		reverse *= 10; //����������� ����� ��� ���������� �������� �������
		reverse += buffer % 10; //�������� ������� ������ �����
		buffer /= 10; //������� ������� ������
	}
	if (reverse == number) cout << "��� ���������" << endl; //���������� ��� ����� � ������� ���������
	else	  cout << "��� �� ���������" << endl;
#endif
#ifdef Escape27
	char key; //��� ���������� ����� ������� ��� ������� �������
	do
	{
		key = _getch(); //������� _getch() ������� ������� ������� � ����������
		//ASCII-��� ������� �������
		cout << (int)key << "\t" << key << endl;
		//(int)key - ����� �������������� ���������� "key" � ��� int, ��� ����
		//����� ������� ��� ������� �������

	} while (key != 27); // ����� ���: while (key != Escape);
#endif
	//TODO 01-09-22
#ifdef SHOOTER_IF_ELSE
	char key = 0;
	do
	{
		key = _getch();
		if (key == 'w' || key == 'W' || key == UP_ARROW)		cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)	cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)	cout << "������" << endl;
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)	cout << "�������" << endl;
		else if (key == SPACE)			cout << "������" << endl;
		else if (key == ENTER)			cout << "�����" << endl;
		else if (key == ESCAPE)		cout << "�����" << endl;
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
		case 'w': case 'W': case UP_ARROW:		cout << "������" << endl; break;
		case 's': case 'S': case DOWN_ARROW:	cout << "�����" << endl; break;
		case 'a': case 'A': case LEFT_ARROW:	cout << "������" << endl; break;
		case 'd': case 'D': case RIGHT_ARROW:	cout << "�������" << endl; break;
		case SPACE:		cout << "������" << endl; break;
		case ENTER:		cout << "�����" << endl; break;
		case ESCAPE:	cout << "�����" << endl; break;
		case -32: break;
		}
	} while (key != ESCAPE);
#endif
#ifdef FACTORIAL
	int num, factorial;
	cout << "������� �����: "; cin >> num;
	if (num)
	{
		factorial = num;
		for (; num > 1;) factorial *= --num;
	}
	else factorial = 1; //��������� ���� ����� 1
	cout << "\n��������� ������� ����� �����: " << factorial;
#endif 
#ifdef FACTORIAL2
	int num;
	double f = 1;
	cout << "������� �����: "; cin >> num;
	for (int i = 1; i <= num; i++)
	{
		f *= i;
		//cout << i << "i = ";
		//cout << f << endl;
	}
	//cout << endl;
	cout << "\n��������� ������� ����� �����: " << f << endl;
#endif 
#ifdef DEGREE_OF_NUMBER
	int deg;
	double base, result;
	char key = 0;
	for (; key != 27;)
	{
		cout << "������� ��������� �������: "; cin >> base;
		cout << "������� ������������� ���������� �������: "; cin >> deg;

		if (deg > 0) //���� ���������� ������� - ������������� ����� �����
		{
			result = base;
			for (; deg > 1; --deg)	result *= base;
			cout << "�����: " << result << endl;
		}
		else if (deg < 0) //���� ���������� ������� - ������������� ����� �����
		{
			result = 1 / base;
			for (; deg < -1; ++deg)	result *= 1 / base;
			cout << "�����: " << result << endl;
		}
		else
		{
			result = 1; //���� ���������� ������� ����� ����
			cout << "�����: " << result << endl;
		}
		cout << "��� ������ ������� (ESC) / ��� ����������� - ����� ������ �������" << endl;
		key = _getch();
	}
#endif
#ifdef DEGREE_OF_NUMBER2
	double a, N = 1;
	int n;
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ������������� ���������� �������: "; cin >> n;
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
	setlocale(LC_ALL, "C");		//���������� ���������� ��������� ASCII (����� �������� ����/�������
	for (int i = 0; i <= 255; i++)
	{
		cout << (char)i << " ";
		if (!(i % 16))	cout << endl;
	}
#endif
#ifdef FIBONACHI_1	//������������ ����� ������
	int num, a = 0, b = 1;
	cout << "������� ������: "; cin >> num;
	for (int fibo = 0; fibo <= num;)
	{
		cout << fibo << "\t";
		fibo = a + b;
		a = b;
		b = fibo;
	}
#endif 
#ifdef FIBONACHI_2	//������������ ����� ���������� - ������� � ��������� ������������� ����������
	int num;
	unsigned long long  fibo = 0, a = 0, b = 1;
	cout << "������� ���������� ��������� �����: "; cin >> num;
	for (int i = 0; i != num; i++)
	{
		if (((fibo >= a) && fibo >= 0) || !fibo) cout << i + 1 << ")\t" << fibo << endl;
		else
		{
			cout << i + 1 << ")\t" << "������ ������������!" << endl;
			break;	//���������� ����� ��� ���������� ���������� ������� �������� ����������
		}
		fibo = a + b;
		a = b;
		b = fibo;
	}
#endif 
#ifdef SIMPLE_NUM
	int num;
	cout << "������� ������ ��������� ��� ������ ������� �����: "; cin >> num;
	for (int i = 2; i <= num; i++)	//���� �������� ���� ����� �� ���������� ������������� ���������
	{
		int a = 1;	//������� ���������� �������� ��������
		for (int j = 1; j != 0;)  //���� �������� i-���� ����� �� ���������� ���������
		{
			a++;  //������� � ���������� �������� ��������
			j = i % a;		//����������� ������� �� ������� i-���� �����		
		}
		if (i == a) cout << i << "\t";	//���������� ������� ����� � ����� � ����� cout
	}
#endif

#ifdef SIMPLE_NUM2
	int num;
	cout << "������� ������ ��������� ��� ������ ������� �����: "; cin >> num;
	for (int i = 2; i < num; i++)	//���� �������� ���� ����� �� ���������� ������������� ���������
	{
		bool simple = 0;
		for (int j = 2; j < num; j++)  //���� �������� i-���� ����� �� ���������� ���������
		{
			if ((i % j) != 0)		//����������� ������� �� ������� i-���� �����
			{
				simple = 1;
				break;
			}
		}
		if (simple) cout << i << "\t";	//���������� ������� ����� � ����� � ����� cout
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








