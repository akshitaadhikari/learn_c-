#include <iostream>
using namespace std;

int main()
{
    cout << " what year was your house built ? \n";
    int year;
    cin >> year ;
    cin.get();

    cout << "what is its street address ?\n";
    char address[60];
    cin.get(address , 60);

    cout<<  " year built : " << year ;
    cout << "\n address : " << address;
    return 0;
}