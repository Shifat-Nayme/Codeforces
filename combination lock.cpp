#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s1,s2;
    int sum=0;
    int diff=0;
    cin>>n;
    cin>>s1>>s2;
    for(int i=0; i<n; i++)
    {
         diff = abs(s1[i]-s2[i]);
         //cout<<i<<"diff="<<diff<<endl;
         if(diff>5)
         {
             sum+=(10-abs(s1[i]-s2[i]));
             //cout<<i<<" ="<<sum<<endl;
         }
         else{
            sum+= abs(s1[i]-s2[i]);
            //cout<<i<<" ="<<sum<<endl;
         }
    }
    cout<<sum<<"\n";
    return 0;

}
