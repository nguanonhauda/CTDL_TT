#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
ifstream infile("input.txt");
ofstream outfile("output.txt");

if (!infile.is_open() || !outfile.is_open()) {
cerr << "Error opening file!" << endl;
return 1;
}

int n; cin >> n;
infile >> n;

vector<int> elements(n);
for (int i = 0; i < n; ++i) {
cin >> elements[i];
infile >> elements[i];
}

for (int i = 0; i < n; ++i){
cout << elements[i];
outfile << elements[i];
if (i < n - 1) {
cout << " ";
outfile << " ";
}
}
outfile << endl;

infile.close();
outfile.close();

return 0;
}