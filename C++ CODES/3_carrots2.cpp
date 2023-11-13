// introduction to cin
#include <iostream>
int main()
{
    using namespace std ;
    int carrots;
    cout << "How many carrots you have ?" << endl;
    cin >> carrots;
    cout << "add 2 more " << endl;
    carrots = carrots +2 ;
    cout << "we now have" << carrots << "carrots" << endl;
    return 0;
}