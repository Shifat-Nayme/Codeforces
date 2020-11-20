#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string a,b;
    int n;
    cin>>a>>b;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<a<<" "<<b<<endl;
        string first,last;
        cin>>first>>last;
        if(first==a)
        {
            a=last;
        }
        else
        {
            b=last;
        }
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
