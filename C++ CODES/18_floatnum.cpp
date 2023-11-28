#include <iostream>
using namespace std ;

int main()
{
    cout.setf( ios_base::fixed, ios_base::floatfield);

    float tub = 10.0 / 3.0 ;
    double mint = 10.0 / 3.0 ;
    const float million = 1.0e6 ;

    cout<< "So no of tub is " <<  tub << endl;
    cout<< "so no of mint is " << mint << endl;

    cout << " so million of tub  is " << tub * million << endl;
    cout << " so ten million of tub  is " << 10 * tub * million << endl;
    cout << " so million of mint  is " << mint * million << endl;
    return 0;
}