#include<iostream>
#include<vector>
using namespace std ; 
int main () {
    int n ; 
    cin >> n ;

    vector<int> x(n) ; 
    vector<int> y(n) ; 
    for ( int i = 0 ; i < n ; i++){
        cin >> x[i];
    }
    for ( int i = 0 ; i < n ; i++){
        cin >> y[i] ; 
    }

    long long tich_vo_huong = 0 ;
    for ( int i = 0 ; i < n ; i++){
        tich_vo_huong += (long long)x[i]*y[i] ; 
    }
    cout << tich_vo_huong << endl ; 
    return 0 ; 
}