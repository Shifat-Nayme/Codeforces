#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int start=1, dist, n, m, steps = 0;
    cin>>n>>m;
    int arr[m];
    for(int i=0 ; i<m ; i++)
    {
        cin>>arr[i];
    }
    for (int i=0 ; i<m ; i++)
    {
        dist = arr[i];
        if(dist>=start)
        {
            steps+=(dist-start);

        }
        else
        {
            steps+=(n-start+dist);
        }

        start=dist;
    }
    cout<<steps<<endl;
    return 0;
}
