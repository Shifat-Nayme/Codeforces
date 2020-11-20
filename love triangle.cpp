#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,flg=0;
    cin>>n;
    int ara[n+1];
    for(int i=1; i<=n ;i++)
    {
        cin>>ara[i];
    }
    for(int i=1; i<=n; i++)
    {
        int a=ara[i];
        int b = ara[a];
        int c= ara[b];
        if(c==i)
        {
            flg=1;
        }
    }
    if(flg==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;

}
