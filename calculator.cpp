#include <iostream>

using namespace std;

int main() {
    char operatorSymbol;
    double num1, num2, result;

    
    cout << "Enter operator (+, -, *, /): ";
    cin >> operatorSymbol;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    
    switch (operatorSymbol) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; 
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1; 
    }

    
    cout << "Result: " << num1 << " " << operatorSymbol << " " << num2 << " = " << result << endl;

    return 0;
}
