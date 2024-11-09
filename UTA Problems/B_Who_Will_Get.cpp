#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int &x:a) cin>>x;
    int f=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            f=true;
            break;
        }
    }

    if(f) cout<<"Senti Aunti Ramva will never be mine"<<endl;
    else
    cout<<"Senti Aunti Ramva is mine"<<endl;

    return 0;
}