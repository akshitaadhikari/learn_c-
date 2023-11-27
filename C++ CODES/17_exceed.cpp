#include <iostream>
#define ZERO 0;
#include <climits>

using namespace std;

int main()
{
    short sam = SHRT_MAX;
    unsigned short dhruv = sam ;

    cout << " sam has " << sam << " dollars and dhruv has " << dhruv << " dollars deposited ." << endl;
    
    sam = sam + 1 ;
    dhruv = dhruv +1 ;
    
    cout << " sam has " << sam << " dollars and dhruv has " << dhruv << " dollars deposited ." << endl;

    sam = ZERO ;
    dhruv = ZERO ;

 // when used no need to define zero as 0
    //sam = 0 ;
    //dhruv = 0 ;

    cout << " sam has " << sam << " dollars and dhruv has " << dhruv << " dollars deposited ." << endl;

    sam = sam - 1 ;
    dhruv = dhruv -1 ;
    
    cout << " sam has " << sam << " dollars and dhruv has " << dhruv << " dollars deposited ." << endl;

    return 0;    
}