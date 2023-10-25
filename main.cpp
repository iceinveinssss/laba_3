#include <iostream>

using namespace std;

//int main()
//{
//    setlocale(0, "");
//    int n;
//    cout << "введите число от 1 до 9 - ";
//    cin >> n;
//    if (n <= 9)
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= i; j++)
//            {
//                cout << j;
//            }
//            cout << endl;
//        }
//    }
//    else
//    {
//        cout << "число больше 9" << endl;
//    }
//    return 0;
//}

//int main() 
//{
//    setlocale(0, "");
//    double a, b;
//    int n;
//
//    // Ввод границ интервала и количества точек
//    cout << "Введите a (начальное значение): ";
//    cin >> a;
//    cout << "Введите b (конечное значение): ";
//    cin >> b;
//    cout << "Введите n (количество точек): ";
//    cin >> n;
//
//    // Проверка на правильность введенных данных
//    if (a >= b || n <= 0) 
//    {
//        cout << "Ошибка ввода данных. Пожалуйста, убедитесь, что a < b и n > 0." << endl;
//        
//    }
//   
//    // Вычисление шага
//    double step = (b - a) / (n - 1);
//
//    // Вывод заголовка таблицы
//    cout << "t\tY" << endl;
//
//    // Расчет и вывод значений функции
//    for (int i = 0; i < n; ++i) 
//    {
//        double t = a + i * step;
//        double Y = 4 * exp(-0.5 * t) * cos(t);
//        cout << t << "\t" << Y << endl;
//    }
//    return 0;
//}

//int main() 
//{
//    int n;
//    int max1 = -1, max2 = -1;
//    
//    do 
//    {
//        cin >> n;
//
//        if (n > max1) 
//        {
//            max2 = max1;
//            max1 = n;
//        }
//        else if (n > max2 && n != max1)
//        {
//            max2 = n;
//        }
//    } while (n != 0);
//
//    cout << max2 << endl;
//
//    return 0;
//}