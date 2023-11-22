#include <iostream>
using namespace std;

double convert(double) ;

int main()
{
    cout << " Enter the number of light years : " ;
    double light;
    cin >> light ;
    cout << light << " light years = " << convert(light) << " astronomical units." << endl;
    return 0;
}

double convert(double n)
{
    return n * 63240 ;
}