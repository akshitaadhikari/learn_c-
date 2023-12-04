#include <iostream>
using namespace std ;

int main()
{
    const int limit = 30 ;
    char name[limit];
    char desert[limit];

    cout << " enter your name ?\n" ;
    cin.getline(name , limit);
    cout << " enter your favourate desert ?\n" ;
    cin.getline(desert , limit);    

    cout << " i have some delicous " << desert << " for you , " << name ;
    return 0;
}