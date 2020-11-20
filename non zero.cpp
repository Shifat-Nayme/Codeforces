#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int ara[n];
        int sum=0,cnt=0,sum2=0;
        for(int i=0; i<n; i++)
        {
            cin>>ara[i];

            if(ara[i]==0)
            {
                ara[i]=1;
                cnt++;
            }
            sum= sum+ara[i];
        }

        if(sum==0)
        {
            cout<<cnt+1<<endl;
        }
        else
        {
            cout<<cnt<<endl;
        }
    }
    return 0;

}
