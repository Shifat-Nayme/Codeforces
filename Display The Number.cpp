#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    unsigned long long int n;
    cin>>t;
    while(t--)
    {

        cin>>n;
        if(n%2==1)
        {
            cout<<"7";
            n=n-3;
        }
        while(n>0)
        {
            cout<<"1";
            n=n-2;
        }
        cout<<endl;
    }
    return 0;

}
