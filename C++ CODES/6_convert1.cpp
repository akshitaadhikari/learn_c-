//stone to pounds
#include <iostream>
using namespace std;

int convert(int) ;

int main()
{
    cout << "convert stone to pounds . 1 stone = 20 pounds " << endl;
    cout << "enter the no. of stones ?" << endl;
    int stones;
    cin >> stones ;
    cout << stones << " stones = " << convert(stones) << " pounds" << endl;
}

int convert(int n)
{
    return 20 * n ;
}