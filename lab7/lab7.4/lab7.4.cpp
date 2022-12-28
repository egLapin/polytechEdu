#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <vector>

#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

void printVector(vector<float> vec) {
    for (float i : vec) {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

   
    setlocale(LC_ALL, "Russian");
  
    vector<float> v_main = {1.0, 2.2, 3.3, 4.4, 5.5};
    printVector(v_main);

    v_main.insert(v_main.begin() +3, 6.34);
    printVector(v_main);

    v_main.erase(v_main.begin() + v_main.size()-1);
    printVector(v_main);
    return 0;
}