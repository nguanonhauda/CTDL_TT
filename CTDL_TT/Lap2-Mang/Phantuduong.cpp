#include <iostream>
using namespace std;
int main() {
    int arr[100000];
    int count=0;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x>0){
            arr[count]=x;
            count++;
        }
    }
    if(count==0){
        cout<<"Day so khong co phan tu duong";
    } else{
        cout<<count<<endl;
        for(int i=0; i<count; i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0 ; 
}