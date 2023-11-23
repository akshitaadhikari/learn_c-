#include <iostream>
using namespace std;

void convert(int, int);

int main()
{
    cout << "Enter the number of hours : " ;
    int hours ;
    cin >> hours ;
    cout << "Enter the number of minutes : " ;
    int minutes ;
    cin >> minutes ;
    convert(hours, minutes);
    return 0;
}

void convert(int a , int b)
{
  cout << "Time : " <<a << ":" << b << endl;
}
