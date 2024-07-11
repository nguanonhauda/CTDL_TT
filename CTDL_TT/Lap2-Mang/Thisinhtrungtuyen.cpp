#include <bits/stdc++.h>
using namespace std;
 
int n,m,ans=0,sbd,d;
string ten,dd;
 
 
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>m;
    int_fast64_t a[n],x[n],y[n];
    string z[n],v[n];
    for(int i=0;i<n;i++)
    {
        cin>>sbd>>d>>ten>>dd;
        if(d>=m)
        {
            x[ans]=sbd;
            y[ans]=d;
            z[ans]=ten;
            v[ans]=dd;
            ans++;
        }
    }
    cout<<"Tong so thi sinh trung tuyen: "<<ans<<"\n";
    for(int i=0;i<ans;i++)
    {
        cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<" "<<v[i]<<"\n";
    }
}