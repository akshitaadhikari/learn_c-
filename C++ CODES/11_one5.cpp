#include <iostream>
using namespace std;

double convert(double) ;

int main()
{
    cout << "Please enter a Celsius value : " ;
    double temp;
    cin >> temp;
    cout << temp << " degrees Celsius is " << convert(temp) << " degrees Fahrenheit." << endl;
    return 0;
}

double convert(double n)
{
    double Farenheit;
    Farenheit = (9 * n / 5) +32 ;
    return Farenheit ;
}
