#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    long long int ara[3];
    long long int a,b,c,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        ara[0]=a;
        ara[1]=b;
        ara[2]=c;
        sort(ara,ara+3,greater<int>());
        long long int rem=0;


        int diff = ara[0]-ara[2];
        int diff2 = ara[0]-ara[1];
        if(diff>0 && n>=diff)
        {
            ara[2]+=diff;
            n = n-diff;
            rem =n;
        }
        if(diff2>0 && n>=diff2)
        {
            ara[1]+=diff2;
            n = n-diff2;
            rem =n;
        }
        cout << ara[0] << " "<<ara[1]<<" "<<ara[2]<<" "<<rem<<endl;
        if(ara[0]==ara[2] && ara[2]==ara[1] && rem==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(ara[0]==ara[2] && ara[2]==ara[1] && rem%3==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}
