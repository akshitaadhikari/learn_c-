#include <iostream>
#include <string>
using namespace std;

int main()
{
    string animal1 ;
    string animal2 = "tiger";
    char animal3[20] ;
    char animal4[20] = "lion" ;

    cout << " enter name of one animal ? \n" ;
    cin >> animal1 ;
    cout << " enter name of other animal ? \n";
    cin>> animal3 ;
    cout << " here are name of some animals " << animal1 <<" "<< animal2 <<" "<< animal3 <<" "<< animal4 <<" ";
    cout << " 3rd letter of animal 1 is " << animal1[2] ;
    cout << " 3rd letter of animal 3 is " << animal3[2] ;
    return 0 ;
}