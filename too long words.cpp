#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len=0;
    string s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
       cin>>s;
       len = s.length();
       //cout<<len<<endl;
       if(len>10)
       {
           cout<<s[0]<<len-2<<s[len-1]<<endl;
       }
       else
       {
           cout<<s<<endl;
       }

    }
    return 0;
}
