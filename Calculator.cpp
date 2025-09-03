#include <iostream>
using namespace std;

class Calculator {
public:
    double num1;
    double num2;

    void add() {
        cout << "Addition: " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Subtraction: " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Multiplication: " << num1 * num2 << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "Division: " << num1 / num2 << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
};

int main() {
    Calculator c;
    cout << "Enter first number: ";
    cin >> c.num1;
    cout << "Enter second number: ";
    cin >> c.num2;

    c.add();
    c.subtract();
    c.multiply();
    c.divide();

    return 0;
}

/*
OUTPUT
Enter first number: 9
Enter second number: 3
Addition: 12
Subtraction: 6
Multiplication: 27
Division: 3
*/
