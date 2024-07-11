#include <iostream>
using namespace std;
int main() {
    int n, MSV, MARK, MARKmin;
    cin>>n>>MARKmin;
    int msv[10000], mark[10000];
    int count=0;
    for (int i=0; i<n; i++) {
        cin>>MSV>>MARK;
        if(MARK>=MARKmin){
            msv[count]=MSV;
            mark[count]=MARK;
            count++;
        }
    }
    cout<<"Tong so sinh vien tham du ky thi cuoi ky: "<<count<<endl;
    for(int i=0; i<count; i++){
        cout<<msv[i]<<" "<<mark[i]<<endl;
    }
}