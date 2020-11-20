#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int len = s.length();
    //cout<<"len="<<len<<endl;
    int cnt=0,j=0;
    for(int i=len-1; i>=len/2; i--)
    {
        if(s[i]!=s[j])
        {
            cnt++;

        }
        j++;
    }
    if(cnt==0 && len%2==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(cnt==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;

}
