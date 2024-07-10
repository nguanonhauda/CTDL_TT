#include<iostream>
using namespace std ; 
int main () {
    int a ,b , c ; 
    int max , min ;    
    cin >> a >> b >> c ; 
    // min 
    min = a ; 
    if ( min > b ){
        min = b ; 
    }
    if ( min > c ){
        min = c ;
    }
    // max
    max = a ; 
    if ( max < b ) {
        max = b ; 
    }
    if ( max < c ) {
        max = c ; 
    }
    cout << min << " " << max << endl ;
    return 0 ; 
    }
