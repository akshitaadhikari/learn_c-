#include <iostream>
using namespace std;

int main()
{
    const int size = 40 ;
    char name[size];
    char desert[size];

    cout << " what is your name ?\n";
    cin.get(name , size ) .get();
    cout << " what is your favourate desert ?\n";
    cin.get(desert , size ) .get();

    cout <<"hey " << name << " i have some " << desert <<" for you .\n";   

    cout << " what is your name ?\n";
    cin.get(name , size ); //if we donot put a blank get() in btw we donot get 
    cout << " what is your favourate desert ?\n";
    cin.get(desert , size );

    cout <<"hey " << name << " i have some " << desert <<" for you .\n";   

    return 0; 
}