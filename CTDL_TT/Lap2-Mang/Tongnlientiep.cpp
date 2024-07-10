#include<iostream>
using namespace std ; 
int main () {
    long long n ; 
    cin >> n ; 
    long long sum = 0 ; 
    if ( n > 100000){
        return 0 ; 
    }
    for ( long long i = 1 ; i <= n ; i++ ) {
        sum += i ;
    }
    cout << sum << endl ; 
    return 0 ; 
}