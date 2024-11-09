#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>a(n);
    for(int &x:a) cin>>x;
    
    bool ev=a[0]%2==0;
    bool flag=true;
    for(int i=1;i<n;i++)
    {
        if((a[i]%2==0)!=ev)
        {
            flag=false;
            break;
        }
    }

    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}