#include <iostream>
using namespace std;

int main()
{

    char oper;
    float num1, num2;

    cout << "Enter operator: +, -, *, /: ";
    cin >> oper;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (oper)
    {

    case '+': // for addition
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-': // for subtraction
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*': // for multiplication
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/': // for division
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

    default:
        // If the operator is other than +, -, * or /, error message is shown
        cout << "Error! operator is not correct";
        break;
    }

    return 0;
}
