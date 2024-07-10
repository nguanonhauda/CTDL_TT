#include<iostream>
#include<vector>
using namespace std ; 

int main () {
    int n , x ; 
    cin >> n >> x ; 
    long long sum = 0 ;
    vector<int>arr(n) ;
    for ( int i = 0 ; i < n ; i++) {
        cin >> arr[i] ; 
        if ( arr[i] > x ) {
            sum += arr[i] ; 
        }
    } 
    cout << sum << endl ; 
    return 0 ; 
}