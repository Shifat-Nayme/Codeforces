#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,t;
    int cnt =0;
    cin>>n>>k;
    for(; n--;)
    {
        cin>>t;
        if(t%k==0)
            cnt++;
    }
    cout<<cnt<<"\n";

    return 0;

}
