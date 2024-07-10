#include<iostream>
#include<iomanip>
using namespace std ; 
int main () {
    double a , b ; 
    cin >> a ;
    cin >> b ;
    if ( a != 0 ) {
        double nghiem = -b/a ;
        cout << fixed <<  setprecision(3) ; 
        cout << nghiem ; 
    }
    else {
        cout << "vo nghiem" ; 
    }
    return 0 ; 
}