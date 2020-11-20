#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a,b,s;
    int len=0,tag=0;
    vector <string> s2;
    cin>>s;
    len= s.length();
    for(int i=0; i<len; i++)
    {
        if(s[i]!='/')
        {
            a=s[i];
            s2.emplace_back(a);
            tag=0;
        }
        else
        {
            if(tag==0)
            {
                a=s[i];
                s2.emplace_back(a);
                tag=1;
            }
        }
    }
    len = s2.size();
    a = s2.front();
    b = s2.back();
    if(a[0]!='/')
    {
        cout<<'/';
    }

    if(b[0]=='/' && len>1)
    {
        s2.pop_back();
    }
    for(auto x: s2)
    {
        cout<<x;
    }
    cout<<"\n";
    return 0;
}
