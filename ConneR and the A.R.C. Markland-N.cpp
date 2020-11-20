#include<bits/stdc++.h>
using namespace std;

#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);

int main()
{
    FastRead;
    int t;
    long long int n,s,k;
    cin>>t;
    while(t--)
    {
        int cnt=0,cnt2=0;
        int flg=0, flg2=0;
        cin>>n>>s>>k;
        long int bild[n]={0};
        int ara[k];
        for(int i=0; i<k; i++)
        {
            cin>>ara[i];
        }
        for(int i=0; i<k; i++)
        {
            bild[ara[i]]=-1;
        }
        for(int i=s+1; i<n; i++)
        {
            if(bild[i]== -1)
            {
                cnt++;
            }
            else
            {
                flg=i;
                break;
            }
        }
        for(int i=s-1; i>1; i--)
        {
            if(bild[i]== -1)
            {
                cnt2++;
            }
            else
            {
                flg2=i;
                break;
            }
        }
        //cout<<cnt << " "<<cnt2<<endl;
        //cout<<bild[s]<<endl;

        if( bild[s] == 0 )
        {
            cout<<"0"<<"\n";

        }
        else
        {
            if(cnt2==0)
            {
                cout<<cnt+1<<endl;
            }
            else if(cnt==0)
            {
                cout<<cnt2+1<<endl;
            }
            else
            {
                if(cnt>cnt2)
                {
                    cout<<cnt2+1<<endl;
                }
                else
                {
                    cout<<cnt+1<<endl;
                }
            }
        }
        cout<<bild[s]<<endl;
    }
    return 0;
}
