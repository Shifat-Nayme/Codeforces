#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n, a;
    int ara[1100]={0};
    int flg =0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        ara[a]++;

        flg = max(flg,ara[a]);
    }

    cout<<n-flg<<endl;

    return 0;

}
