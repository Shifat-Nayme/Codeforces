#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ara[n+1], p[m+1];
        for(int i=1; i<=n; i++)
        {
            cin>>ara[i];
        }
        for(int i=1; i<=m; i++)
        {
            cin>>p[i];
        }
        for(int i=1; i<=m; i++)
        {
            if(ara[p[i]]>ara[p[i]+1])
            {

            }
        }

    }
}
