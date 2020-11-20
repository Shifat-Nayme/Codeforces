#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int ara[n+1];
    int d[n+1][n+1][2];
    for(int i=1; i<=n; i++)
    {
        cin>>ara[i];
        if(ara[i]==0)
        {
            ara[i]=-1;
        }
        else
        {
            ara[i]%=2;
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout<<ara[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            d[i][j][0] = 1e9;
            d[i][j][1] = 1e9;
        }
    }
    d[0][0][0]=0;
    d[0][0][1]=0;

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(ara[i]%2!=1) d[i][j][0]=min(d[i-1][j-1][0],d[i-1][j-1][1]+1);
            cout<<"if not 1 "<<d[i-1][j-1][0]<<" i="<<i<<" j="<<j<<" "<<d[i-1][j-1][1]+1<<endl;
            if(ara[i]%2!=0) d[i][j][1]=min(d[i-1][j][0]+1,d[i-1][j][1]);
            cout<<"if not 0 "<<d[i-1][j][0]+1<<" i="<<i<<" j="<<j<<" "<<d[i-1][j][1]<<endl;
        }
    }
    cout<<min(d[n][n/2][0],d[n][n/2][1])<<endl;
    cout<<d[n][n/2][0]<<" "<<d[n][n/2][1]<<endl;

}
