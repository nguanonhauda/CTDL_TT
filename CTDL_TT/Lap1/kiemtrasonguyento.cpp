#include <iostream>
 
using namespace std;
 
bool kiem_tra_so_nguyen_to(int x) {
  if (x <= 1) {
    return false;
  } else if (x <= 3) {
    return true;
  } else if (x % 2 == 0 || x % 3 == 0) {
    return false;
  }
 
  int i = 5;
  while (i * i <= x) {
    if (x % i == 0 || x % (i + 2) == 0) {
      return false;
    }
    i += 6;
  }
  return true;
}
 
int main() {
  int x;
  cin >> x;
 
  if (kiem_tra_so_nguyen_to(x)) {
    cout << "co";
  } else {
    cout << "khong";
  }
 
  return 0;
}