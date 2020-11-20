#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    vector <int> v;
    cin>>n;
    int ara[100010];
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    for(int i=0; i<=n-1; i++)
    {
        if(ara[i]==ara[i+1])
        {
            cnt++;
        }
        else{
            cnt++;
            v.push_back(cnt);
            cnt=0;
        }
    }

    int ma=0;


    for(int i=0; i<v.size()-1; i++)
    {
        int mi = min(v[i],v[i+1]);
        ma = max(ma,mi);

    }
    cout<<ma*2<<endl;
    return 0;

}
