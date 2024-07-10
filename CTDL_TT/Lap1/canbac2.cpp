#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std ; 
 
int main () {
    int n;
    cin>>n;
    double a=sqrt(n);
    cout<<setprecision(3)<<fixed<<a;
}