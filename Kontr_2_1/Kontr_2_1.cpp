﻿// Kontr_2_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 
#include <math.h> 
using namespace std;

int main()
{
    int q, i, flag = 1;

    cout << "input number: ";

    cin >> q;

    // Iterate from 2 to sqrt(n) 
    for (i = 2; i <= sqrt(q); i++) {
        if (q % i == 0) {
            flag = 0;
            break;
        }
    }

    if (q <= 1)
        flag = 0;
    if (flag == 1) {
        cout << "\n" << q << " - this is PRIME number\n";
    }
    else {
        cout << "\n" << q << " - this is not PRIME number\n";
    }
    return 0;
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
