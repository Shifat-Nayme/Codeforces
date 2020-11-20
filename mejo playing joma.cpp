#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt=0,cnt2=0;
    int ans=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='L')
        {
            cnt--;
        }
        else
        {
            cnt2++;
        }
    }
    ans =abs(cnt-cnt2);
    cout<<ans+1<<"\n";
}
