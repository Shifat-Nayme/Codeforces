#include<bits/stdc++.h>
using namespace  std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    long long int a,b;
    cin>>n;
    if(n%2==0)
    {
        a=n*4;
        b=n*3;
    }
    else{
        a=n*9;
        b=n*8;
    }
    cout<<a<<" "<<b<<endl;
}
