#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,k;
    int a1,b1,sum;
    double a2,b2;
    int t;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>d>>k;
        a1=a/c;
        a2= a%c;
        b1=b/d;
        b2= b%d;
        if(a2!=0) { a1++;}
        if(b2!=0) { b1++;}
        sum = a1+b1;
        if(sum<=k)
        {
            cout<<a1<<" "<<b1<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;

}
