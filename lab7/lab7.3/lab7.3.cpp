#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;


void Read()
{
    fstream fs("usertext.txt");
    string line;
    while (getline(fs, line)) cout << line << '\n';
    fs.close();
}
void Erase()
{
    fstream fs;
    fs.open("usertext.txt", fstream::out | fstream::trunc);
    fs.close();
}
void Write(string& q)
{
    fstream fs;
    fs.open("usertext.txt", ios::app);
    fs << q << '\n';
    fs.close();
}

float circle(float r) {
    return round((r * M_PI * 2) * 1000) / 1000;
}

int main3()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bool nameflag = 0;
    setlocale(LC_ALL, "Russian");
    float input;
    cout << "Введите Радиус Окружности: ";
    cin >> input;
    cout << endl << circle(input) << endl;

    string tInput;
    bool isWork = true; 
    fstream FS;
    FS.open("usertext.txt", ios::in);

    while (isWork) {
        cout << "Введите Строку: ";
        cin >> tInput;
        if (tInput == "exit") isWork = false;
        else if (tInput == "erase") Erase();
        else if(tInput == "read") Read();
        else {
            Write(tInput);
        }
    }
    return 0;
}
