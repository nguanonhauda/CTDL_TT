#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ; 
int main () {
    int n ; 
    cin >> n ; 
    if ( n <= 0 ) {
        return 1 ; 
    }
    double tinh = sqrt(n) ; 
    cout << fixed << setprecision(3) << tinh ; 
    return 0 ;  
}