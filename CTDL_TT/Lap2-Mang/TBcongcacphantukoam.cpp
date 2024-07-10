#include<iostream>
#include<iomanip>
#include<vector>
using namespace std ; 
int main (){
    int n ; 
    cin >> n ; 

    vector<int> a(n) ; 
    long long sum = 0 ; 
    int dem = 0 ; 
    for ( int i = 0 ; i < n ; i++){
        cin >>a[i] ; 
        if ( a[i] >= 0 ){
            dem++ ; 
            sum += a[i] ; 
        }
    }

    if ( dem == 0 ){
        cout << "Không co phan tu không am " << endl ; 
    }else {
        double tb_sum = (double)sum/dem ; 
        cout << fixed << setprecision(3) << tb_sum << endl ; 
    }
    return 0 ; 
}