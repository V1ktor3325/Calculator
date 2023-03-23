#include <iostream>

using namespace std;

int main() {
    float num1, num2, result;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    if(operation == '+') {
        result = num1 + num2;
    } else if(operation == '-') {
        result = num1 - num2;
    } else if(operation == '*') {
        result = num1 * num2;
    } else if(operation == '/') {
        result = num1 / num2;
    } else {
        cout << "Invalid operator";
        return 0;
    }

    cout << num1 << " " << operation << " " << num2 << " = " << result;

    return 0;
}
