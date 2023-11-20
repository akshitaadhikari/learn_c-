#include <iostream>
using namespace std;

int convert(int);

int main()
{
    cout << "Enter your age in years ?" << endl;
    int years;
    cin >> years;
    cout << " Your age in months is "<< convert(years);
    return 0;
}

int convert(int n)
{
    int months;
    months = n* 12;
    return months;
}