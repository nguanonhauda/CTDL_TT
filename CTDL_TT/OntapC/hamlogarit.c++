#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std ;
int main () {
    double x ; 
    cin >> x ; 

    if ( x <= 0 ) {
        return 1 ; 
    }
    double expX = exp(x) ; 
    double lnX = log(x) ; 
    double log10X = log10(x) ; 
    double log2X = log2(x) ; 

    cout << fixed << setprecision(3) ; 
    cout << expX << " " << lnX << " " << log10X << " " << log2X << endl ; 
    return 0 ; 
}