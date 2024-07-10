#include<iostream>
#include<cmath>
using namespace std ; 
int main () {
    int n ; 
    cin >> n; 
    double can = sqrt(n) ; 
    if ( can == (int)can) {
        cout << "YES" << endl ; 
    }
    else {
        cout << "NO" << endl ; 
    }
    return 0 ; 
}