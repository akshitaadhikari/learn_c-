#include <iostream>
//#include <cmath>
using namespace std;

double square(double) ;
double divide(double , double);

int main ()
{
    cout << " WELCOME TO THE CALCULATOR " << endl;
    double num1;
    cin >> num1;
    double num2;
    cin >> num2;
    cout << square(num1) << endl;
    cout <<square(num2) << endl;
    cout <<divide(num1 , num2)<< endl;
    return 0;
}

double square(double a)
{
    return a*a;
}

double divide(double a, double b)
{
    double c;
    c = a/b ;
    return c;
}