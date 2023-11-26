#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios_base :: fixed , ios_base :: floatfield);
    cout << 5/2 <<endl;
    cout << 5.0/2 <<endl;
    cout << 5.0/2.0 <<endl;
    cout << 2.9e7/3.8e4 <<endl;
    cout << 2.9e7f/3.8e4f <<endl;
    return 0;
}