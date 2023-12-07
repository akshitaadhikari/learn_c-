//1 stone = 14 pounds
#include <iostream>
using namespace std;

int main()
{
    const int convert = 14 ;
    int a ;
    cout << " enter your weight in pounds: ";
    cin >> a;
    cout << a/convert << "stone " << a%convert << "pounds";
    return 0;
}