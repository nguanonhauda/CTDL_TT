#include<iostream>
#include<vector>
#include<iomanip>

using namespace std ; 
int main (){
    int n ; 
    long long sum = 0 ;
    cin >> n ; 

    vector<int > a(n);
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i] ;
        sum += a[i] ;
    }

    double tb_cong = (double)sum/n;
    cout << fixed << setprecision(3) << tb_cong << endl ; 

    return 0 ; 

}