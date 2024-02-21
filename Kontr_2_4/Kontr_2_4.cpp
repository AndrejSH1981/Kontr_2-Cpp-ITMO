// Kontr_2_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <math.h> 
#include <cmath>
#include <clocale>
#include <random>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    //SetConsoleCP(1251);
    wcout << L"Центр мишени случайно распологается в пределах координат от 0 до 100 \n Расчёт очков: \n +/-10 от центра мишени = 10, \n  +/-20 от центра мишени = 5, \n   +/-30 от центра мишени = 1, \n       больше чем +/-30 от центра мишени = 0  " << endl;

    srand(time(0));
    int O_x = rand() % 100;
    wcout << O_x << endl;

    int start_y = 0;
    int end_y = 100;
    int O_y = rand() % 100;
    wcout << O_y << endl;

    int n = 0; // минимальное число очков для окончания стрельбы
    wcout << L"Необходимо ввести минимальное чимло очков для завершения стрельбы: ";

    wcin >> n;

    int i1_0 = 0;
    int i;
    int i0;
    int x_shot;
    int y_shot;
    int radius_mishen;
    int shots = 0;
    double radius_shot_ot_mishen;





    for (i = 1; i1_0 <= n; i++) {

        wcout << L"Произведите выстрел № " << i << endl;

        //Координаты выстрела по шкале х
        wcout << L"-введите координату х: ";


        wcin >> x_shot;

        //Координаты выстрела по шкале у
        wcout << L"-введите координату y: ";

        wcin >> y_shot;

        radius_mishen = pow(abs((O_x - x_shot)), 2) + pow(abs((O_y - y_shot)), 2);
        radius_shot_ot_mishen = sqrt(radius_mishen);
        wcout << radius_shot_ot_mishen << endl;
        //Условия определения очков от попадания

        int razryd = 0;


        if (radius_shot_ot_mishen >= -30 && radius_shot_ot_mishen <= 30)
        {
            razryd = 1;
        }
        else
        {
            razryd = 0;
        }

        if (radius_shot_ot_mishen >= -20 && radius_shot_ot_mishen <= 20)
        {
            razryd = 5;
        }
        if (radius_shot_ot_mishen >= -10 && radius_shot_ot_mishen <= 10)
        {
            razryd = 10;
        }

        i1_0 = razryd + i1_0;


        wcout << L"суммарный результат после выстрелов в количестве:" << i;
        wcout << " = " << i1_0 << endl;
        shots++;
        i0 = i1_0;
    }





    wcout << L"Число сделанных выстрелов: " << shots << endl;
    double master = i0 / shots;
    wcout << master << endl;
    // wcout << i0 << endl;
    if (master == 10) {
        wcout << L"Это соответствует уровню СНАЙПЕР" << endl;
    }
    else if (master <= 8.4 and master >= 3.6) {
        wcout << L"Это соответствует уровню СТРЕЛОК" << endl;
    }
    else {
        wcout << L"Это соответствует уровню НОВИЧЁК" << endl;
    }




    //cin.get();
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
