#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    string a,b,c;
    int i;
    a="984";
    b=a;
    reverse(b.begin(), b.end());
    cout<<"print b"<<" "<< b <<endl;
    for(i=0; b[i]=='0'; i++);
        cout<<i<<endl;


        b[i]--; b[0]++;
        cout<<"b[i]="<<b[i]<<endl;
        cout<<"b[0]="<<b[0]<<endl;

    cout<<"b="<<b<<endl;


}
