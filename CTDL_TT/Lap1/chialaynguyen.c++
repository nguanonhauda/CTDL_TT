#include<iostream>
#include<math.h>
using namespace std ; 
int main () {
    int n ;
    int m ; 
    cin >> n ; 
    cin >> m ; 
    if ( m == 0 ) {
        return 1 ; 
    }
    double  division = static_cast<double>(n)/m ;
    cout << division << endl  ; 
    return 0 ; 
}