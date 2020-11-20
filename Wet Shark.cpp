#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long int n;
    long long int sum=0;
    int flg=0;
    cin>>n;
    long long int ara[n];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        sum=sum+ara[i];
    }
    if(sum%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        sort(ara,ara+n);
        for(int i=0; i<n; i++)
        {
            if(ara[i]%2==1)
            {
                sum=sum-ara[i];
            }
            if(sum%2==0)
            {
                flg=1;
                break;
            }
        }
        if(flg==1)
        {
             cout<<sum<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }

    }
    return 0;
}
