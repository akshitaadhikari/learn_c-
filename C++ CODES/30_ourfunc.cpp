#include <iostream>
using namespace std ;

// defining function prototypes
void akshita(int) ;

// main function
int main()
{
    akshita(3); // calling function
    cout << " enter the number ?" << endl;
    int number ;
    cin >> number ;
    akshita(number);
    return 0;
}

// second function
void akshita(int n)
{
    cout << "akshita have " << n << " oranges."<< endl;
    // return 0 ; not used here as void functions donot need return statements
}