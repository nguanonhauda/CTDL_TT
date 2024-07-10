#include<iostream>
#include<cmath>
using namespace std ; 
int main () {
    int n ;
    int m ; 
    cin >> n ; 
    cin >> m ; 
    if ( m == 0 ) {
        return 1 ; 
    }
    int chia = n%m ;
    cout << chia << endl  ; 
    return 0 ; 
}