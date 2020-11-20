#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T,n;

    cin>>T;
    while(T--)
    {
        cin>>n;
        int flg=0;
        int ara[n];
        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        for(int i=0; i<n; i++)
        {
            if(ara[i]%2!=0)
            {
                flg++;
            }
        }
        if(flg>=2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
           cout<<"YES"<<endl;
        }

    }

}
