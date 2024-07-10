#include<iostream>
using namespace std ; 
int main () {
    int n , x ;
    cin >> n >> x ; 
 
    int msv[1000] ; 
    int diem[1000] ; 
    for ( int i = 0 ; i < n ; i++){
        int m , D ; 
        cin >> m >> D ; 
        msv[i] = m ; 
        diem[i] = D; 
    }
    bool found = false ; 
    for ( int i = 0 ; i < n ; i++){
        if(msv[i] == x ){
            cout << diem[i] << endl;
            found = true ; 
            break ;
        }
    }
    if (!found){
        cout << "No data" << endl ; 
    }
    return 0 ; 
}