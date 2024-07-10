#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ; 
int main () {
    double x ; 
    const double PI = 3.14 ; 
    cin >> x ; 

    // điều kiện cho 0<x<pi/2
    if ( x<=0 || x>= PI/2){
        return 1 ; 
    }

    // Tính giá trị lượng giác 
    double cosX = cos(x) ; 
    double sinX = sin(x) ; 
    double tanX = tan(x) ; 
    double cotX = 1.0/tan(x) ; 

    // In ra kết quả ở chữ số 3 
    cout << fixed << setprecision(3);
    cout << cosX << " " << sinX << " " << tanX << " " << cotX << endl ; 
    return 0 ; 
}