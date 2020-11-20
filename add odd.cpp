#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long int a,b;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int cnt=0;
        long long int diff=0;
        if(a==b)
        {
            cout<<"0"<<endl;
        }
        if(a>b)
        {
            diff=a-b;
            if(diff%2==0)
            {
                cnt++;
            }
            else
            {
                cnt=cnt+2;

            }
            cout<<cnt<<endl;
        }
        if(a<b)
        {
            diff=b-a;
            if(diff%2==1)
            {
                cnt++;
            }
            else
            {
                cnt=cnt+2;
            }
            cout<<cnt<<endl;

        }
    }
    return 0;

}
