#include <iostream>
#include <string>

using namespace std;

#define vN(var) string(#var)

int main()
{
    setlocale(LC_ALL, "Russian");

    // task 1
    int a = 10, b = 13, c = 21;

    cout << "Sum: " << (a + b + c) << endl;
    cout << "Difference: " << (a - b - c) << endl;
    cout << "Product: " << (a * b * c) << endl;
    cout << "Quotient: " << (a / b / c) << endl;

    cout << "Остат. от дел. 1 на 2: " << (a % b) << endl;

    cout << "Результат: (((145 - 100 / 20) / 20) * 50) + 45 = "
         << ((((145 - 100 / 20) / 20) * 50) + 45) << endl;

    int a1 = 3, a2 = 7;
    int res1, res2, res3;
    int lres1, lres2, lres3;

    res1 = (a1 & a2);
    res2 = (a1 | a2);
    res3 = (a1 ^ a2);

    lres1 = ~res1;
    lres2 = res1 >> 1;
    lres3 = res1 << 1;

    cout << "res1: " << res1 << endl;
    cout << "res2: " << res2 << endl;
    cout << "res3: " << res3 << endl;
    cout << "lres1: " << lres1 << endl;
    cout << "lres2: " << lres2 << endl;
    cout << "lres3: " << lres3 << endl;

    bool BTrue = 1, BFalse = 0;

    cout << "Результат логических операций: " << (BTrue && (BTrue && (BTrue && BTrue || BFalse) && (BFalse || BTrue != BFalse))) << endl;

    cout << "Результат логических операций над числами: " << (25 < 48 && (23 > (3 + 15) || (2 < 8 && (5 >= 2 && 15 < 15)))) << endl;

    // task 2

    float userNum1, userNum2;

    cout << "Ввод 1 числа: ";
    cin >> userNum1;
    cout << endl;

    cout << "Ввод 2 числа: ";
    cin >> userNum2;
    cout << endl;

    cout << "Ср. арифм. = " << ((userNum1 + userNum2) / 2) << endl;

    cout << "Укажите тип операции (+, -, *, /): ";
    char oper;
    cin >> oper;

    switch (oper)
    {
    case '+':
        cout << (userNum1 + userNum2);
        return 0;
    case '-':
        cout << (userNum1 - userNum2);
        return 0;
    case '*':
        cout << (userNum1 * userNum2);
        return 0;
    case '/':
        cout << (userNum1 / userNum2);
        return 0;
    default:
        return 0.0;
    }

    return 0;
}
