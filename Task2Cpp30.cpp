#include <iostream>
#include "Test.h"
using namespace std;
int main()
{
    while (true)
    {
    setlocale(LC_ALL, "Rus");
    Test d;
	int n;
	cout << "Выберите задание(1-30): ";
	cin >> n;
    switch (n)
    {
    case 1:
        try
        {
            double t, l;
            cout << "Введите T: ";
            cin >> t;
            cout << "Введите L: ";
            cin >> l;
            cout << "Задание 1 = " << d.Task1(t, l) << endl;
        }
        catch (const exception)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 2:
        try
        {
            double p, y;
            cout << "Введите P: ";
            cin >> p;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Задание 2 = " << d.Task2(p, y) << endl;
        }
        catch (const exception)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 3:
        try
        {
            double n, y;
            cout << "Введите N: ";
            cin >> n;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Задание 3 = " << d.Task3(n, y) << endl;

        }
        catch (const exception)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 4:
        try
        {
            double a, t;
            cout << "Введите A: ";
            cin >> a;
            cout << "Введите T: ";
            cin >> t;
            cout << "Задание 4 = " << d.Task4(a, t) << endl;
        }
        catch (const exception)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 5:
        try
        {
            double x;
            cout << "Введите X: ";
            cin >> x;
            cout << "Задание 5 = " << d.Task5(x) << endl;
        }
        catch (const exception)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 6:
        try
        {
            double y, x;
            cout << "Введите X: ";
            cin >> x;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Задание 6 = " << d.Task6(x, y) << endl;
        }
        catch (const exception)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 7:
        try
        {
            double m;
            cout << "Введите M: ";
            cin >> m;
            cout << "Задание 7 = " << d.Task7(m) << endl;
        }
        catch (const exception)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 8:
        try
        {
            double y;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Задание 8 = " << d.Task8(y) << endl;
        }
        catch (const exception)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 9:
        try
        {
            double y, x;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Введите X: ";
            cin >> x;
            cout << "Задание 9 = " << d.Task9(y, x) << endl;
        }
        catch (const exception)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 10:
        try
        {
            double y, x, k;
            cout << "Введите X:";
            cin >> x;
            cout << "Введите K: ";
            cin >> k;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Задание 9 = " << d.Task10(y, x, k) << endl;
        }
        catch (const exception)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 11:
        try
        {
            double y, x;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Введите X: ";
            cin >> x;
            cout << "Задание 11 = " << d.Task11(y, x) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 12:
        try
        {
            double t, x;
            cout << "Введите X: ";
            cin >> x;
            cout << "Введите T: ";
            cin >> t;
            cout << "Задание 12 = " << d.Task12(t, x) << endl;
        }
        catch (const exception)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 13:
        try
        {
            double y;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Задание 13 = " << d.Task13(y) << endl;
        }
        catch (const exception)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 14:
        try
        {
            double y, x;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Введите X: ";
            cin >> x;
            cout << "Задание 14 = " << d.Task14(y, x) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 15:
        try
        {
            double y;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Задание 15 = " << d.Task15(y) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 16:
        try
        {
            double y;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Задание 16 = " << d.Task16(y) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 17:
        try
        {
            double y;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Задание 17 = " << d.Task17(y) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 18:
        try
        {
            double y;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Задание 18 = " << d.Task18(y) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 19:
        try
        {
            double y, n, g;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Введите N: ";
            cin >> n;
            cout << "Введите G: ";
            cin >> g;
            cout << "Задание 19 = " << d.Task19(y, n, g) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 20:
        try
        {
            double y, x, k;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Введите K: ";
            cin >> k;
            cout << "Введите X: ";
            cin >> x;
            cout << "Задание 20 = " << d.Task20(y, k, x) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 21:
        try
        {
            double y, h;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Введите H: ";
            cin >> h;
            cout << "Задание 21 = " << d.Task21(y, h) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 22:
        try
        {
            double y, x, u;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Введите X: ";
            cin >> x;
            cout << "Введите U: ";
            cin >> u;
            cout << "Задание 22 = " << d.Task22(y, u, x) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 23:
        try
        {
            double y, f;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Введите F: ";
            cin >> f;
            cout << "Задание 23 = " << d.Task23(y, f) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 24:
        try
        {
            double y;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Задание 24 = " << d.Task24(y) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 25:
        try
        {
            double y, f;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Введите F: ";
            cin >> f;
            cout << "Задание 25 = " << d.Task25(y, f) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 26:
        try
        {
            double p;
            cout << "Введите P: ";
            cin >> p;
            cout << "Задание 26 = " << d.Task26(p) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 27:
        try
        {
            double y, x, v;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Введите X: ";
            cin >> x;
            cout << "Введите V: ";
            cin >> v;
            cout << "Задание 27 = " << d.Task27(y, x, v) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 28:
        try
        {
            double y, h;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Введите H: ";
            cin >> h;
            cout << "Задание 28 = " << d.Task28(y, h) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 29:
        try
        {
            double y;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Задание 29 = " << d.Task29(y) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;

    case 30:
        try
        {
            double y, r;
            cout << "Введите Y: ";
            cin >> y;
            cout << "Введите R: ";
            cin >> r;
            cout << "Задание 30 = " << d.Task30(y, r) << endl;
        }
        catch (const exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
        break;
    }
	}
}
