#include <iostream>
using namespace std;
#include <string>
#include <cstring>

int main()
{
    char a[20] ;
    char b[20] = "apple " ;

    string c ;
    string d = "mango" ;

    strcpy(a, b);
    c = d ;

    strcat( a, "eat ");
    c += "eat ";

    int len1 = c.size() ;
    int len2 = strlen(a);

    cout << "len 1 : " << len1 << "\nlen2 : " << len2 <<endl;
    return 0;
}