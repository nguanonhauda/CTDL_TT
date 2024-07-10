#include<iostream>
using namespace std ; 
int main () {
    int n ; 
    long long sum = 0 ; 
    cin >> n ;
    if ( n > 100000){
        return 1 ; 
    }
    for ( int i = 1 ; i <= n ; i++ ) 
    {
        sum += i ; 
    } 
    cout << sum ; 
}