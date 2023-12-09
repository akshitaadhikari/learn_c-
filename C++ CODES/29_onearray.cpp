#include <iostream>
using namespace std;

int main()
{
    int yams[3] ;
    yams[0]= 5;
    yams[1]= 9;
    yams[2]= 3;

    int yamcost[3];
    yamcost[0]= 2;
    yamcost[1]= 35;
    yamcost[2]= 24;

    cout << "total yams = " << yams[0] +  yams[1] +yams[2] ;
    cout << "\nTotal package of " << yams[0] <<" costs " << yamcost[0] ;
    //int z = (yams[0] * yamcost[0]) + (yams[1] * yamcost[1]) + (yams[2] * yamcost[2]) ;
    cout << "\nTotal yam expense is " << (yams[0] * yamcost[0]) + (yams[1] * yamcost[1]) + (yams[2] * yamcost[2]) ;

    cout << "\nsize of yam array is " << sizeof yams ;
    cout << "\nsize of 1 yam is " << sizeof yams[0];
    return 0;

}