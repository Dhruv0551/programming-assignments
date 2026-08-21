#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    Calculator calc;

    int a = 20;
    int b = 5;

    cout << "Calculator Program" << endl;
    cout << "------------------" << endl;

    cout << "Addition: "
         << calc.add(a, b) << endl;

    cout << "Subtraction: "
         << calc.subtract(a, b) << endl;

    cout << "Multiplication: "
         << calc.multiply(a, b) << endl;

    cout << "Division: "
         << calc.divide(a, b) << endl;

    return 0;
}