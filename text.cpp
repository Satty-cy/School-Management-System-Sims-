#include <iostream>
using namespace std;

// Function to perform calculations
void calculator() {
    char operation;
    double num1, num2, result;

    // Display calculator menu
    cout << "Simple Calculator" << endl;
    cout << "-----------------" << endl;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the selected operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
    }
}

int main() {
    char choice;

    do {
        calculator();
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the calculator!" << endl;
    return 0;
}
