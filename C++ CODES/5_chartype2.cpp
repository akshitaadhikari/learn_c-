#include <iostream>
using namespace std ;

int main()
{
    char name = 'A';
    int number = name;

    cout << "ASCII code for " << name << " is " << number << endl;

    name = name +1 ;
    number = name;

    cout << "ASCII code for " << name << " is " << number << "!" << endl;

    name = name +5 ;
    number = name;

    cout << "ASCII code for " << name << " is " << number ;
    cout.put('!'); 

    char alarm = '\a';
    cout<< alarm;
    return 0;

}