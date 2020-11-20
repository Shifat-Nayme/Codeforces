#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        cin>>n;
        if(n==2)
        {
            cnt=2;
        }
        else
        {
            if(n%2==0)
            {
                cnt=0;
            }
            else{
                cnt++;
            }
        }
        cout<<cnt<<"\n";

    }

    return 0;

}
