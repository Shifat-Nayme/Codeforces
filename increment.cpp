#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=30;
    int b=20;
    a=abs(a-b);
    int c=b=0;
    while(a>b || (b-a)%2!=0)
    {
        b=b+ ++c;
        cout<<"a="<<a<<" "<<endl;
        cout<<"c="<<c<<" "<<endl;
        cout<<"b="<<b<<" "<<endl;
    }
    cout<<endl;
    cout<<c<<endl;
}
