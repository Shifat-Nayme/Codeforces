#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n;
    int cnt=0, cnt2=0;
    int a;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0; i<n; i++)
    {

        if(s[i]=='0') {cnt++;}
        else {cnt2++;}
    }
    a = abs(cnt-cnt2);
    cout<<a<<"\n";
    return 0;
}
