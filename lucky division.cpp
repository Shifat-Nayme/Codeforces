#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ara[13]={4,7,44,47,77,444,447,474,477,744,747,774,777};
    int n,cnt=0;
    cin>>n;
    for(int i=0; i<13; i++)
    {
        if(n==ara[i] || n%ara[i]==0)
        {
            cout<<"YES"<<"\n";
            break;
        }
        else
        {
            cnt++;
        }
    }
    if(cnt==13) cout<<"NO"<<"\n";

    return 0;

}
