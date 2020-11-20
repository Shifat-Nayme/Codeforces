#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    long long a, b, c;
    long long ans =0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int i;
        c=0;
        int flg=0;

        for( i=2 ;i<=sqrt(a); i++)
        {
            if(a%i==0)
            {
                c=i;
                break;
            }
        }
        if(c==0)
        {
            c=a;
        }
        cout<<c+a+(2*(b-1))<<endl;
    }


    return 0;

}
