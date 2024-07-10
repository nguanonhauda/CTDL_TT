#include<iostream>
#include<cmath>
using namespace std ; 
int main () {
    int a , b , c; 
    cin >> a >> b >> c ;
    if ( a<b+c && b<a+c && c<a+b) {
        cout << "YES" << endl ; 
    }
    else {
        cout << "NO" << endl ; 
    }
    return 0 ; 
}