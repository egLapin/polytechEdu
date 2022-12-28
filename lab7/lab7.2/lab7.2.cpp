#include <iostream>
#include <string>
#include <windows.h>
#include <regex>
using namespace std;

bool check_name(string name) {
    regex reg("^[A-Z]{1}[a-zA-Z]{1,31}$");
    return regex_search(name, reg);
}

int main2()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bool nameflag = 0;
    setlocale(LC_ALL, "Russian");
    string input;
    cout << "Введите Имя: ";
    cin >> input;
    
    if (check_name(input)) {
        cout << "Корректно!" << endl;
        nameflag = 1;
    }
    else {
        cout << "Имя не корректно!" << endl;
    }

    if (nameflag) {
        regex mail_reg("\\w*@\\w*[.]\\w{2,5}");

        string email = input + "@mail.ru";
        smatch match;

        while (regex_search(email, match, mail_reg)) {
            cout << match[0] << endl;
            email = match.suffix().str();
        };
    }
    return 0;
}
