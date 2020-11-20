#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,d,temp=0;
        cin>>n>>d;
        if(d<=n)
        {
            cout<<"YES"<<"\n";
        }
        else{
                for(int i=0; i<=n/2; i++)
                {
                   temp=ceil(1.0*d/(1+i)+i);
                   if(temp<=n)
                   {
                       cout<<"YES"<<"\n";
                       break;
                   }
                }
                if(temp>n)
                cout<<"NO"<<"\n";
        }
    }
    return 0;
}
