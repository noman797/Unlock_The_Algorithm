#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int cn=k-n;

    int c[]={25,13,9,7,2,1};
    bool flag=false;
    for(int cc:c)
    {
        while(cn>=cc)
        {
            cn=cn-cc;

            if(cc==7 or cc==9)
            {
                flag=true;
            }
        }
    }

    if(flag) cout<<"Happy"<<endl;
    else cout<<"Sad"<<endl;

    return 0;
}