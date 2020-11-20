#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,g,b;
        long long int work=0, half=0;
        cin>>n>>g>>b;
        half= n/2;
        if(n<g)
        {
            cout<<n<<endl;
        }
        else if(n>g && g<b)
        {
            while(half>0)
            {
                work = work+g;
                half=half-work;
            }
            long long int div= work/g;
            long long int mul= div*b;
            work = work+mul;
            long long int sum=work;
            if(work>n)
            {
                cout<<work<<endl;
            }
            else{
                while(n>0)
                {
                    sum= sum+(g+b);
                    n=n-sum;
                }
                cout<<sum<<endl;
            }


        }
    }

}
