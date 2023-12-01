#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios_base::fixed , ios_base::floatfield);
    float aunt = 2 ;
    int uncle = 2.563836 ;
    int child = 2.86e32 ;

    cout << aunt << endl;
    cout << uncle << endl;
    cout << child << endl;
    return 0;
}