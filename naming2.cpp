#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int t,n,m;
    string s[20], s2[20];
    cin>>n>>m;
    for(int i=0;i<n; i++)
    {
        cin>>s[i];
    }

    for(int i=0;i<m; i++)
    {
        cin>>s2[i];
    }

    int q;
    cin>>q;
    for(;q--;)
    {
        int y; cin>>y;
        y--;
        cout<<s[y%n]<<s2[y%m]<<endl;
    }
    return 0;
}
