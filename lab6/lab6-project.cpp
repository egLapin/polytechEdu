#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Exp {
public :
    vector<string> valueEx = { "Вы ввели отрицательное число!","Что-то не верится...", "Вы ещё не родились",  "Спасибо!" };

    static int checker(int year) {
        if (year < 0) return 0;
        if (year < 1850) return 1;
        if (year > 2022) return 2;
        return 3;
    }
    string printError(int code) {
        return valueEx[code];
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    int input;
    cout << "Введите 1, 2 или 3!" << endl;
    cin >> input;
    

    try {
        if (input < 1 || input > 3) throw(input);
        else {
            switch (input)
            {
            case 1:
                cout << endl << "Один" << endl;
                break;
            case 2:
                cout << endl << "Два" << endl;
                break;
            case 3:
                cout << endl << "Три" << endl;
                break;
            default:
                break;
            }
        }
    }
    catch (int input){
        cerr << "Некорректное значение. Вы ввели отличное число, но это не страшно!" << endl;
    }

    cout << "Введите свой год рождения" << endl;
    cin >> input;
    Exp newInput;
    try {
        if (Exp::checker(input) != 3) {
            throw(newInput.printError(Exp::checker(input)));
        }
        else cout << "Спасибо!" << endl;
    }
    catch (string except) {
        cerr << except << endl;
    }
}