#include <iostream>
using namespace std;

class Calculator {

public:

    double num1;
    double num2;

    double add() { return num1 + num2; }
    double multiply() { return num1 * num2; }
    double subtract_1_2() { return num1 - num2; }
    double subtract_2_1() { return num2 - num1; }
    double divide_1_2() { return num1 / num2; }
    double divide_2_1() { return num2 / num1; }
    bool set_num1(double& num1) {
        while (true) {
            cout << "Введите число 1: ";
            cin >> num1;
            if (num1 == 0) {
                cout << "Неверный ввод!" << endl;
            }
            else {
                return true;
            }
        }
    };
    bool set_num2(double& num2) {
        while (true) {
            cout << "Введите число 2: ";
            cin >> num2;
            if (num2 == 0) {
                cout << "Неверный ввод!" << endl;
            }
            else {
                return true;
            }
        }
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    Calculator number;

    
        while (true) {
            if (!number.set_num1(number.num1)) {
                continue;
            }
            if (!number.set_num2(number.num2)) {
                continue;
            }
            cout << "num1 + num2 = " << number.add() << endl;
            cout << "num1 - num2 = " << number.subtract_1_2() << endl;;
            cout << "num2 - num1 = " << number.subtract_2_1() << endl;
            cout << "num1 * num2 = " << number.multiply() << endl;
            cout << "num1 / num2 = " << number.divide_1_2() << endl;
            cout << "num2 / num1 = " << number.divide_2_1() << endl;
           
        };
}