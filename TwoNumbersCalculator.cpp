#include <iostream>
using namespace std;

class Calculator {

    double num1;
    double num2;

public:
    Calculator() : num1(1), num2(1) {};

    double add() { return num1 + num2; }
    double multiply() { return num1 * num2; }
    double subtract_1_2() { return num1 - num2; }
    double subtract_2_1() { return num2 - num1; }
    double divide_1_2() { return num1 / num2; }
    double divide_2_1() { return num2 / num1; }
    bool set_num1(int n) {
        if (n == 0) {return false; }
        else { num1 = n;  return true; }
    }
    bool set_num2(int n) {
        if (n == 0) { return false; }
        else { num2 = n; return true; }
    }
};
int main()
{
    int n1, n2;
    setlocale(LC_ALL, "Russian");
    Calculator number;

 

    while (true) {
        do {
            cout << "Введите число 1: ";
            cin >> n1;
           if(number.set_num1(n1))
               cout << "Неверный ввод!" << endl;
        } while (number.set_num1(n1));
           
        do {
            cout << "Введите число 2: ";
            cin >> n2;
            if(!number.set_num2(n2))
                cout << "Неверный ввод!" << endl;
        } while (!number.set_num2(n2));

        cout << "num1 + num2 = " << number.add() << endl;
        cout << "num1 - num2 = " << number.subtract_1_2() << endl;;
        cout << "num2 - num1 = " << number.subtract_2_1() << endl;
        cout << "num1 * num2 = " << number.multiply() << endl;
        cout << "num1 / num2 = " << number.divide_1_2() << endl;
        cout << "num2 / num1 = " << number.divide_2_1() << endl;

    };
};