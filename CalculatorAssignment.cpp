//Necessary Libraries:
#include <iostream> //for input and output (like cout and cin)
#include <cmath> //for mathematical functions (like sqrt, pow, etc.)

using namespace std; //This lets us use cout and cin without writing std:: every time 
int main() 
{
    //Step 1: declaring variables
    double num1, num2;
    
    cout<< "Enter the first number in the calculator: ";
    cin >> num1;

    cout<< "Enter the second number in the calculator: ";
    cin >> num2;

    //Step 2: Writing the programming logic in the computer 
    //Addition: 
    cout << "Addition: " << num1 + num2 << endl;

    //Subtraction:
    cout << "Subtraction: " << num1 - num2 << endl;

    //Multiplication:
    cout << "Multiplication: " << num1 * num2 << endl;

    //Division:
    if (num2 == 0) {
        cout << "Error, cannot divide by zero" << endl;
    }
    else {
        cout << "Division: " << num1 / num2 << endl;
    }

    //Square root:
    if (num1 < 0) {
        cout << "Error, cannot take square root of a negative number" << endl;
    } 
    else {
        cout << "Square root of the first number: " << sqrt(num1) << endl;
    }

    //Power: Num1 raised to num2 
    cout << "Power (num1, num2): " << pow(num1, num2) << endl;

    //Logarithm of the first number:
    if (num1 <= 0) {
        cout << "Log Error: Cannot take log of zero or a negative number" << endl;
    } else {
        cout << "Logarithm of Num1: " << log10(num1) << endl;
    }

    //Step 3: Finish the Progrma
    return 0;

}




