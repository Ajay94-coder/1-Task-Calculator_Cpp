#include <iostream>
using namespace std;

int main()
{
    double num1, num2; // Declare two variables to store the numbers
    char op;           // Declare a variable to store the operator
    double result;     // Declare a variable to store the result
    bool valid = true; // Declare a variable to indicate if the input is valid
    cout << "Welcome to the calculator software!\n";
    cout << "Enter two numbers and an operator (+, -, *, /) separated by spaces.\n";
    cout << "For example: 12 + 34\n";
    cout << "Enter your input: ";
    cin >> num1 >> op >> num2; // Get the user's input
    switch (op)                // Check the operator
    {
    case '+':                 // If it is +
        result = num1 + num2; // Perform addition

        break;
    case '-':                 // If it is -
        result = num1 - num2; // Perform subtraction
        break;
    case '*':                 // If it is *
        result = num1 * num2; // Perform multiplication
        break;
    case '/':          // If it is /
        if (num2 == 0) // Check if the second number is zero
        {
            cout << "Error: Cannot divide by zero.\n"; // Display an error message
            valid = false;                             // Set the valid flag to false
        }
        else
        {
            result = num1 / num2; // Perform division
        }
        break;
    default:                                  // If it is anything else
        cout << "Error: Invalid operator.\n"; // Display an error message
        valid = false;                        // Set the valid flag to false
    }
    if (valid) // If the input is valid
    {
        cout << "The result is: " << result << "\n"; // Display the result
    }
    return 0;
}
