#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        long long int a,b,c,d,rem=0;
        cin>>a>>b>>c;
        int flg=0,cnt=0;
        for(int i=a; i<=b; i++)
        {
            int s = sqrt(i);
            cout<<"s="<<s<<endl;
            if(s*s!=i)
            {
                rem=i;
                flg=0;
                while(rem>0)
                {
                    d=rem%10;
                    cout<<d;
                    if(d==c && flg==0)
                    {
                        cnt++;
                        //cout<<"d="<<d<<endl;
                        flg=1;
                    }
                    rem=rem/10;
                }
                cout<<endl;
            }
        }
        cout<<cnt<<endl;
    }
}
