#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,r,low,high;
        cin>>a>>b>>c>>r;
        if(a>b){swap(a,b);}
        low =c-r;
        high =c+r;
        if(b<low || a>high)
        {
            cout<<abs(a-b)<<"\n";
            continue;
        }
        else{
            long long int mini, maxi;
            maxi = max(a,low);
            mini = min(b,high);
            cout<<abs(a-b)- abs(maxi-mini)<<"\n";
        }

    }
    return 0;
}
