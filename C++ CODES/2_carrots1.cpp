#include <iostream>
int main()
{
    using namespace std ;
    int carrots;
    carrots = 25;
    cout << "i have ";
    cout << carrots ;
    cout << " carrots " ;
    cout << "i ate a carrot. " ;
    carrots = carrots - 1 ;
    cout << "i have " ;
    cout << carrots ;
    cout << "left. " << endl ;

    //can be also written as 
    cout << "i have" << carrots << "carrots" << "i ate a carrot . now i have" << carrots -1 << "carrots remaining" <<endl ;
    return 0 ;

}