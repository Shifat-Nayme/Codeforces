#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    int n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        long long int ara[n],ara2[n];
        long long int sum=0,cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
            if(ara[i]%3==0)
            {
                cnt++;
                ara[i]=-1;
            }
            ara2[i]=ara[i];
        }

        for(int i=0; i<n; i++)
        {
            for(int j=1; j<n; j++)
            {
                if(ara2[j]!=-1 && ara[i]!=-1)
                {
                    sum=ara[i]+ara2[j];
                    if(sum%3==0)
                    {
                        cnt++;
                        ara2[j]=-1;
                        ara[i]=-1;
                        ara2[i]=-1;
                        ara[j]=-1;
                    }

                }

            }
        }
        sum=0;
        for(int i=0; i<n; i++)
        {
            if(ara2[i]!=-1)
            {
                sum=sum+ara2[i];
                if(sum%3==0)
                {
                    cnt++;
                }
            }
        }

        cout<<cnt<<endl;
    }
}
