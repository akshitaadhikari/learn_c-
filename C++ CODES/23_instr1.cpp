#include <iostream>
using namespace std;

int main()
{
    const int length = 23;
    char name[length];
    char desset[length];
    cout << "What is your name ? _______\b\b\b\b\b\b\b";
    cin >> name ;
    cout << "What is your favourate dessert ?" << endl;
    cin >> desset ;
    cout << " i have some deliciouus " << desset << " for you , " << name << endl;
    return 0;
}