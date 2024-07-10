#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ; 
int main () {
    double a , b, c ; 
    cin >> a >> b >> c ;
    if ( a == 0 ){
        if( b == 0 ) {
            cout << ( c== 0 ? "vo nghiem" : "vo so nghiem") << endl ;                
        }else {
            cout << fixed << setprecision(3) << -c/b << endl ; 
        }
    return 0 ; 
    }
    double delta = b*b -4*a*c ; 
    if ( delta < 0 ) {
        cout << "vo nghiem" << endl ; 
    } 
    else if (delta == 0 ) {
        double x = x = -b/(2*a); 
        cout << fixed << setprecision(3)<< x << endl ; 
    }
    else if ( delta > 0 ) {
        double x1 = (-b+sqrt(delta))/(2*a) ;
        double x2 = (-b-sqrt(delta))/(2*a) ; 
        
        cout << fixed << setprecision(3) << min(x1,x2) << " " << max(x1,x2) << endl ; 
    }
    return 0 ; 
}