#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    long long int n,sum=0;
    char str[20];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        if(str[0]=='T')
        {
           sum+=4;
        }
        else if(str[0]=='C')
        {
            sum+=6;
        }
        else if(str[0]=='D')
        {
            sum+=12;
        }
        else if(str[0]=='O')
        {
            sum+=8;
        }
        else{
            sum+=20;
        }
    }
    cout<<sum<<endl;
}
