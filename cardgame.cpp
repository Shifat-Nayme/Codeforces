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
        int n,k1,k2;
        int cnt=0,x;
        cin>>n>>k1>>k2;
        for(int i=0; i<k1; i++)
        {
            cin>>x;
            if(x==n) cnt=1;
        }
        for(int i=0; i<k2; i++)
        {
            cin>>x;
        }

        if(cnt==1)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }

    }
    return 0;

}
