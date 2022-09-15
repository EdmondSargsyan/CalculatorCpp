#include <iostream>
#include <cmath>
#include <string>
double calculation(double numA, double numB, char oper);
int question();
using namespace std;
int main()
{
    double numA;
    double numB;
    char oper;
    cout << "\nHello and Welcome to this simple calculator. It was made by: Quincy" << endl;
    cout << "Just simply enter the first number of your problem then the operator and then the second number of your problem." << endl;
    cout << "Operators are: \"+ for adding, - for subtracting, * for multiplying, / for dividing, ^ for power, s for square root.\"" << endl << "\n";
    cout << "Enter the first number: ";
    cin >> numA;
    cout << endl;
    cout << "Enter the operator: ";
    cin >> oper;
    cout << endl;
    if (oper == 's')
    {
        cin.ignore();
        calculation(numA, 0, oper);
    }
    else
    {
        cout << "Enter the second number: ";
        cin >> numB;
        cout << endl;
        calculation(numA, numB, oper);
    }
}

double calculation(double numA, double numB, char oper)
{
    if (oper == '+' || oper == '-' || oper == '*' || oper == '/' || oper == '^' || oper == 's')
    {
        if (oper == '+')
        {
            double add = numA + numB;
            cout << "The sum of the two numbers are " << add << endl;
        }
        else if (oper == '-')
        {
            double subtract = numA - numB;
            cout << "The difference of the two numbers are " << subtract << endl;
        }
        else if (oper == '*')
        {
            double multiply = numA * numB;
            cout << "The product of the two numbers you put in are " << multiply << endl;
        }
        else if (oper == '/')
        {
            double divide = numA / numB;
            cout << "The dividend of the two numbers you put in are " << divide << endl;

        }
        else if (oper == '^')
        {
            double power = pow(numA, numB);
            cout << numA << " to the power of " << numB << " is " << power << endl;
        }
        else if (oper == 's')
        {
            double square = sqrt(numA);
            cout << "The square root of " << numA << " is " << square << endl;
        }
        return question();
    }
    else
    {
        cout << "\nYou have put in an invalid operator/number!\n\a";
        return question();
    }
}

int question()
{
    string yn;
    cout << "\nDo you want to use the calculator again? ";
    cin >> yn;
    cout << endl;
    if (yn == "Yes" || yn == "No" || yn == "YES" || yn == "NO" || yn == "YEs" || yn == "nO" || yn == "yes" || yn == "no")
    {
        if (yn == "Yes" || yn == "YES" || yn == "YEs" || yn == "yes")
        {
            return main();
        }
        else if (yn == "No" || yn == "NO" || yn == "nO" || yn == "no")
        {
            return 0;
        }
    }
    else
    {
        cout << "Invalid answer, try again.\a\n";
        return question();
    }
}