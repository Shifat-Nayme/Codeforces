#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int flg=0;
    string ara;
    cin>>s;
    for(int i=0; i<5; i++)
    {
        cin>>ara;
        if(s[0]==ara[0] || s[0]==ara[1] || s[1]==ara[0] || s[1]==ara[1])
            flg=1;
    }
    if(flg==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
