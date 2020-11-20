#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    long long int n,m;
    int cnt=0;
    cin>>n>>m;

    if(n>=m)
    {
        cout<<n-m<<endl;
    }
    else
    {
        //long int rem = m-n;
        while(m>n)
        {
            if(m%2==0)
            {
                m=m/2;
                cnt++;
            }
            else{
                m=m+1;
                cnt++;
            }
        }
        cout<<cnt+(n-m)<<endl;

    }

    return 0;

}
