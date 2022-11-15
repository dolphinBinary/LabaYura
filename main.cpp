// подключение библиотек
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    system("chcp 65001");
    setlocale(LC_ALL, "ru"); // подключение русского языка

    float Eps; //точность
    float Tsum; // точная сумма
    float Sum; // сумма
    float Diff; // разность суммы и точной суммы
    float n; // кол-во просуммированных элементов
    float Znak; // менялка знака

    cout << "Введите точность(Eps)" << endl; // вывод текста "Введите точность(Eps)"
    cin >> Eps; // ввод значения точности(Eps) пользователем
    cout << "Точность(Eps) равна " << Eps << endl; // вывод текста "Точность(Eps) равна" и значения Eps

    //условие
    if (Eps <= 0)
    {
        cout << "Ошибка! Введите Eps > 0" << endl; // вывод текста "Ошибка! Введите Eps > 0"
        return 1;
    }

    Tsum = (3.1415 / 4); //точная сумма
    Sum = 0;
    n = 0;
    Diff = fabs(Tsum - Sum);
    Znak = -1;

    // начало цикла
    while (Diff > Eps)
    {
        Znak = -Znak; // смена знака
        n = n + 1; // подсчет кол-ва элементов
        Sum = Sum + ((1 / ((2 * n) - 1)) / Znak); // формула подсчета суммы
        Diff = fabs(Tsum - Sum); // вычисление разности

    }
    //вывод всех значений
    cout << "Количество элементов = " << n << endl;
    cout << "Сумма = " << Sum << endl;
    cout << "Точная сумма = " << Tsum << endl;
    cout << "Разность точной суммы =  " << Diff << "< " << Eps << endl;

}