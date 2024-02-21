// Kontr_2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


using namespace std;

int main()
{
	SetConsoleCP(1251);
	string str;
	string control;
	cout << "Enter SNILS(9*n)" << endl;
	cin >> str;
	//cout << str.length() << endl;

	int cont = 0;

	int summ101, num9, num8, num7, num6, num5, num4, num3, num2, num1;
	int summ;
	string str1, str2, str3, str4, str5, str6, str7, str8, str9;

	str1 = str[0];
	str2 = str[1];
	str3 = str[2];
	str4 = str[3];
	str5 = str[4];
	str6 = str[5];
	str7 = str[6];
	str8 = str[7];
	str9 = str[8];


	num9 = stoi(str1);
	//cout << num9 << endl;
	num8 = stoi(str2);
	//cout << num8 << endl;
	num7 = stoi(str3);
	//cout << num7 << endl;
	num6 = stoi(str4);
	//cout << num6 << endl;
	num5 = stoi(str5);
	//cout << num5 << endl;
	num4 = stoi(str6);
	//cout << num4 << endl;
	num3 = stoi(str7);
	//cout << num3 << endl;
	num2 = stoi(str8);
	//cout << num2 << endl;
	num1 = stoi(str9);;
	//cout << num1 << endl;
	summ = (num9 * 9) + (num8 * 8) + (num7 * 7) + (num6 * 6) + (num5 * 5) + (num4 * 4) + (num5 * 5) + (num3 * 3) + (num2 * 2) + (num1 * 1);

	//cout << summ << endl;

	if (num9 == num8 || num8 == num7 || num7 == num6 || num6 == num5 || num5 == num4 || num4 == num3 || num3 == num2 || num2 == num1) {
		cont = 0;
		cout << "\nContr number is Not walid(||cont = 0) - " << cont << endl;
	}
	else if (summ > 101) {
		cout.precision(2);
		summ101 = summ % 101;
		//cout << summ101 << endl;
		if (summ101 < 100) {
			cont = summ101;
			cout << "\nContr number is walid(cont = summ101) - " << cont << endl;
		}
		else if (summ101 == 100) {
			cont = 0;
			cout << "\nContr number is NOT walid(cont = 0) - " << cont << endl;
		}
	}
	else if (summ < 100) {
		cont = summ;
		cout << "\nContr number is walid(cont = summ) - " << cont << endl;
	}
	else if (summ == 100 || summ == 101) {
		cont = 0;
		cout << "\nContr number is walid(cont = 0) - " << cont << endl;
	}

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
