#include <iostream>;
using namespace std;


void main()
{
/*Задача 1. 
Написать программу, которая преобразует введенное с клавиатуры дробное число в 
денежный формат.*/


	float fValue1;
	short iRubles, iKopecks;

	setlocale(LC_ALL, "Rus");
	cout << "Преобразование числа в денежный формат" << endl;
	cout << "Введите дробное число -->";
	cin >> fValue1;
	fValue1 += 0.0001;
	iRubles = fValue1;								// Выделяем целую часть
	iKopecks = (fValue1 - iRubles) * 100;			// Выделяем дробную часть

		
	cout << fValue1 << " руб. - это " << iRubles << "руб. " << iKopecks << "коп.";
	



/*Задача 2.  
Написать программу вычисления стоимости покупки, состоящей из нескольких тетрадей и 
карандашей.*/

	float fPrice_of_Сopybook1, fPrice_of_Pencil, fTotal_Cost1;
	short iQuantity_of_Copybook1, iQuantity_of_Pencil;

	cout << "\n\nВычисление стоимости покупки.\nВведите исходные данные:" << endl;
	cout << "Цена тетради (руб.) -> ";
	cin >> fPrice_of_Сopybook1;
	cout << "Количество тетрадей -> ";
	cin >> iQuantity_of_Copybook1;
	cout << "Цена карандаша (руб.) -> ";
	cin >> fPrice_of_Pencil;
	cout << "Количество карандашей -> ";
	cin >> iQuantity_of_Pencil;

	fTotal_Cost1 = fPrice_of_Сopybook1 * iQuantity_of_Copybook1 + fPrice_of_Pencil * iQuantity_of_Pencil;

	cout << "\nСтоимость покупки: " << fTotal_Cost1 << "руб.";


/*Задача 3.  
Написать программу вычисления стоимости покупки, состоящей из нескольких тетрадей и 
такого же количества обложек к ним*/

	float fPrice_of_Сopybook2, fPrice_of_Cover, fTotal_Cost2;
	short iQuantity_of_Set;

	cout << "\n\nВычисление стоимости покупки.\nВведите исходные данные:" << endl;
	cout << "Цена тетради (руб.) -> ";
	cin >> fPrice_of_Сopybook2;
	cout << "Цена обложки (руб.) -> ";
	cin >> fPrice_of_Cover;
	cout << "Количество комплектов (шт.) -> ";
	cin >> iQuantity_of_Set;

	fTotal_Cost2 = (fPrice_of_Сopybook2 + fPrice_of_Cover) * iQuantity_of_Set;

	cout << "\nСтоимость покупки: " << fTotal_Cost2 << "руб.";


/*Задача 4.  
Написать программу вычисления стоимости поездки на автомобиле на дачу (туда и обратно). 
Исходными данными являются: расстояние до дачи (км); количество бензина, которое 
потребляет автомобиль на 100 км пробега; цена одного литра бензина.*/


	float fFuel_Consumption, fPrice_of_Gasoline, fTotal_Cost3;
	short iDistance, z;

	cout << "\n\nВычисление стоимости поездки на дачу и обратно." << endl;
	cout << "Расстояние до дачи (км) ->";
	cin >> iDistance;
	cout << "Расход бензина (литров на 100 км пробега) ->";
	cin >> fFuel_Consumption;
	cout << "Цена литра бензина (руб.) ->";
	cin >> fPrice_of_Gasoline;

	fTotal_Cost3 = fFuel_Consumption / 100 * iDistance * fPrice_of_Gasoline; //Получение ответа задачи
	
	fTotal_Cost3 *= 100; //начало операции округления полученного ответа до двух знаков после запятой
	z = fTotal_Cost3;
	fTotal_Cost3 = z;
	fTotal_Cost3 /= 100; //конец операции округления полученного ответа до двух знаков после запятой

	cout << "\nПоездка на дачу и обратно обойдется в " << fTotal_Cost3 << "руб.";



}