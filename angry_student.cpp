#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int t,k;
    cin>>t;
    for(;t--;)
    {
        int cnt=0;
        cin>>k;
        cin>>s;
        while(true)
        {
            bool b=true;
            for(int i=0; i<k-1; i++)
            {
                if(s[i]=='A' && s[i+1]=='P')
                {
                    s[i+1]='A';
                    //cout<<"innerloop= "<<s<<endl;
                    b=false;
                    i++;
                }
            }
            //cout<<s<<endl;
            if(b)
                break;
            else
                cnt++;

        }
        cout<<cnt<<"\n";
    }
    return 0;
}
