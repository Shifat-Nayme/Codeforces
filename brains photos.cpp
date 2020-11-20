#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,cnt=0;
    cin>>n>>m;
    char s;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>s;
            if(s=='C' || s=='M'|| s=='Y')
            {
              cnt++;
            }
        }
    }
    if(cnt==0)
    {
        cout<<"#Black&White"<<"\n";
    }
    else
    {
       cout<<"#Color"<<"\n";
    }

    return 0;

}
