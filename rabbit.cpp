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
        int flg=0,cnt=0;

        long long int x,y,a,b;
        cin>>x>>y>>a>>b;
        while(y>x)
        {
            cnt++;
            x=x+(a*2);
            y=y-(b*2);
            if(x==y)
            {
                flg=1;
                break;
            }
        }
        if(flg==1)
        {
            cout<<cnt*2<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
