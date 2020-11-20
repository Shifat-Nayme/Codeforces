#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    long long int a,b,c;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>a>>b;
        a= abs(a-b);
        b=c=0;
        while(a>b || (b-a)%2!=0)
        {
             c++;
             b=b+c;
        }
        cout<<c<<endl;
    }
    return 0;
}
