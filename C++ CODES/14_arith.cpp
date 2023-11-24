#include <iostream>
using namespace std;
 int main()
 {
    cout.setf(ios_base ::fixed , ios_base:: floatfield);
    float a, b;
    cout << "enter 1st no:_____\b\b\b\b\b";
    cin>> a;
    cout << "enter 2nd no:_____\b\b\b\b\b";
    cin>> b;

    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    return 0;
 }