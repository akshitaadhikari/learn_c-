#include <iostream>
using namespace std;

int main()
{
    int a , b , c ;
    a = 1.61 +2.45 ;
    b = int (2.11) + int (2.67) ;
    c = (int) 2.11 + (int) 2.67 ;

    cout << "a = " << a;
    cout << "\nb = " << b;
    cout << "\nc = " << c<< endl;

    char d = 'z';
    cout << "z" << int(d) ;
    cout << "z" << static_cast<int> (d) ;
    return 0;

}