#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main1()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");
    string input;
    cout << "Введите строку: ";
    cin >> input;
    for (int i = 1; i <= 3; i++) {
        cout << input[i];
    }
    cout << endl;
    bool isFind = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'a' || input[i] == 'а') {
            cout << "а найдена по индексу : " << i << endl;
            isFind = 1;
            break;
        }
    }
    if (!isFind) {
        cout << "а не найдена" << endl;
    }
    return 0;
}
