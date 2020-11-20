#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,cnt=0,big=0;
    cin>>n;
    int ara[n], index[n];

    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        index[i]=ara[i];
    }
    sort(ara,ara+n, greater<int>());
    for(int i=1; i<n; i++)
    {
        cnt= cnt+ (ara[i]*i+1);
    }
    cout<<cnt+1<<endl;
    for(int i=0; i<n; i++)
    {
      for(int j=0;j<n; j++)
      {
          if(ara[i]==index[j])
          {
              cout<<j+1<<" ";
              index[j]=-1;
              break;
          }
      }
    }
    cout<<endl;
    return 0;

}
