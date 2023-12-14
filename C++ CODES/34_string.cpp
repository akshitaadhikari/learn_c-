#include <iostream>
using namespace std;
#include <cstring>

int main()
{
    const int TEXT = 16;
    char name1[TEXT];
    char name2[TEXT] = "roboxxx" ;
    cout << " hi my name is " << name2 << " what is your name ?\n";
    cin >> name1;
    cout << " hi " << name1 << " yur name has " << strlen(name1) << "letters and the size of array is " << sizeof(name1) << "bytes\n";
    cout << "your initial is " << name1[0] ;
    name2[3] = '\0';
    cout << " \n first three letters of my name are " << name2 <<endl ;
    return 0;
}
