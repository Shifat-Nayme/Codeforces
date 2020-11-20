#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,x;
    cin>>n>>m;
    if(m>n)
    {
        x=-1;

    }
    else
    {
        if(n%2==0)
        {
            x=n/2;

        }
        else
        {

            x=(n/2)+1;
        }
        while(x%m!=0)
        {
            x++;
        }
    }
    cout<<x<<"\n";
    return 0;
}
