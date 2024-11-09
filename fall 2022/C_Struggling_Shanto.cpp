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
    sort(a.begin(),a.end());
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>50)
        {
            cnt++;
        }

    }

    for(int x:a)
    cout<<x<<" ";
    cout<<endl;
    cout<<cnt<<endl;

    return 0;
}