#include <iostream>
#include <climits>
using namespace std ;

int main()
{
    int n_int ;
    short n_short ;
    unsigned long n_long ;
    long long n_llong ;
    
    cout << " size of int : " << sizeof n_int << endl ;
    cout << " size of short : " << sizeof n_short << endl ;
    cout << " size of long : " << sizeof n_long << endl ;
    cout << " size of llong : " << sizeof n_llong << endl ;

    cout << " max of int : " << INT_MAX  << sizeof n_int << endl ;
    cout << " max of short : " << SHRT_MAX << endl ;
    cout << " max of long : " << LONG_MAX << endl ;
    cout << " max of llong : " << LONG_LONG_MAX << endl ;

    cout << " min of int : " << INT_MIN  << sizeof n_int << endl ;
    cout << " min of short : " << SHRT_MIN<< endl ;
    cout << " min of long : " << LONG_MIN << endl ;
    cout << " min of llong : " << LONG_LONG_MIN << endl ;

    cout << CHAR_BIT << endl;
}
