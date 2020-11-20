#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,a;
    vector <int> v1;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v1.emplace_back(a);
    }
    sort(v1.begin(), v1.end());

    for(auto x : v1)
    {
        cout<<x<<" ";
    }
    cout<<"\n";

//    for(int i=0; i<v1.size(); i++)
//    {
//        cout<<v1[i]<<endl;
//    }
    return 0;

}
