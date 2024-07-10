#include <iostream>
 
using namespace std;
 
bool check_collinear(int x1, int y1, int x2, int y2, int x3, int y3) {
    int det = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
 
    return det == 0;
}
 
int main() {
    int x1, y1, x2, y2, x3, y3;
 
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
 
    if (check_collinear(x1, y1, x2, y2, x3, y3)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}