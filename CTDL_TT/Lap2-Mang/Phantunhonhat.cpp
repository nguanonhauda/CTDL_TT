#include<iostream>
#include<vector>
using namespace std ;
int main () {
    int n ;
    cin >> n ; 

    vector<int> a(n) ; 
    for ( int i= 0 ; i < n ; i++){
        cin >> a[i] ; 
    }

    int min = a[0];
    for ( int i = 1 ; i < a.size(); i++){
        if(a[i] <  min){
            min = a[i];
        }
    }
    cout << min << endl ; 
    return 0 ; 
}