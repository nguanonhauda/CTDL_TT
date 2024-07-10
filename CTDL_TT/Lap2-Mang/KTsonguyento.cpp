#include<iostream>
#include<cmath>
using namespace std ; 
bool isPrime(int x) {
    if (x <= 1){ 
        return false;}
    if (x <= 3) {return true;}
    if (x % 2 == 0 || x % 3 == 0) {return false;}
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) {return false;}
    }
    return true;
}


int main () {
    int x ; 
    cin >> x ; 

    if (isPrime(x)){
        cout << "co" << endl ; 
    }else {
        cout << "khong" << endl ; 
    }
    return 0 ; 
}