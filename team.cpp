#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n, cnt=0, flg=0;
    int ara[3];
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
           cin>>ara[j];
           if(ara[j]==1)
           {
               flg++;
               if(flg==2)
               {
                   cnt++;
                   flg=0;
               }
           }
        }
        flg=0;

    }
    cout<<cnt<<endl;
    return 0;
}
