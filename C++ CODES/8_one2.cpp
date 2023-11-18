#include <iostream>
using namespace std;

int convert(int);

int main()
{
    cout << " distance in furlongs ?" << endl;
    int furlongs;
    cin >> furlongs;
    cout << furlongs << " furlongs = " << convert(furlongs) << " yards"<< endl;
    return 0;
}

int convert(int n)
{
    return 220*n ;
}