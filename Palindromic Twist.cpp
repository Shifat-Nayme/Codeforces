#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    string s;
    int n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        cin>>s;
        int flg=0;
        for(int i=0 ;i<n; i++)
        {
            char a =s[i];
            char b = s[n-1-i];
            if(int(a-b)>2)
            {
                flg=1;
            }
        }
        if(flg==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
