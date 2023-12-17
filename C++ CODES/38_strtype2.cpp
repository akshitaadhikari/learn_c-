#include <iostream>
using namespace std ;
#include <string>
 int main()
 {
    string s1 = "penguin" ;
    string s2 , s3 ;
    cout << "You can assign one string to another : s2 = s1" << endl ;
    s2 = s1 ;
    cout << "s1 : " << s1 << " ,s2 : " << s2 << endl ;
    s2 = "buzzard" ;
    cout << "s2: " << s2 << endl;
    s3 = s1+s2 ;
    cout << "s3: " << s3 << endl;
    s1 += s2 ;
    cout << " s1+= s2 yields s1 = " + s1 ;
    s1 += " for a day";
    cout << " s2 += \" for a day \" yiedls : " << s1 << endl ;
    return 0 ;
    
 }