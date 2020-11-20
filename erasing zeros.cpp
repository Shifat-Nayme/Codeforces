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
        int cnt=0;
        string s;
        cin>>s;
        int f=0,l=0;
        int len = s.length();
        for(int i=0; i<len; i++)
        {
            if(s[i]=='1')
            {
               f=i;
               break;
            }
        }
         for(int i=len-1; i>=0; i--)
        {
            if(s[i]=='1')
            {
               l=i;
               break;
            }
        }
        for(int i=f; i<l; i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;

}
