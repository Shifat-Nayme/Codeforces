#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int m = max(0, (b+c-a+2)/2);
        cout<<max(c-m+1,0)<<endl;

    }

}

