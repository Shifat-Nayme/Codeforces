#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T,n,b,c,d,flg=0;
    string s;
    cin>>T;
    while(T--)
    {
        cin>>n;
        cin>>s;
        if(n==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int j=0;
            for(int i=0; i<n-1; i++)
            {
                    if(s[i]=='0')
                        continue;
                    b =s[i]-'0';
                    c = s[j+1]-'0';
                    int a = s[i]-'0' + s[j+1]-'0';
                    if(a%2==0 && b!=0 && c!=0)
                    {
                        b =s[i]-'0';
                        c = s[j+1]-'0';
                        flg=1;
                        break;
                    }
                    j++;
            }
            if(flg==1)
            {
              cout<<b<<c<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}
