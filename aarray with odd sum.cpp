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
        int sum=0,flg=0;
        int ara[n];
        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=1; j<n; j++)
            {
                sum=ara[i]+ara[j];
                if(sum%2!=0)
                {
                    flg++;
                }
            }

        }
        if(flg>=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }

    }
    return 0;

}
