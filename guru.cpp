#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define all(c)              c.begin(), c.end()
#define CC(x) cout << (x) << endl
#define rep(i,n) for(int i=0;i<n;i++)
#define FastRead ios_base::sync_with_stdio(false);cin.tie(NULL);
#define EPS 1e-9
const int inf=1e9;
const int dx[] = { 0, 1, -1, 0 };
const int dy[] = { -1, 0, 0, 1 };
//ll a[100001]={0};
//ll a2[100001]={0};
typedef unsigned long long ull;
using namespace std;
int main()
{
    FastRead
    ll x,y,z=0,a=0,t,b,c,d=1;
    cin >>t;
    while(t--)
    {
        cin >>x;
        string s;
        cin >>s;
        char c='z';
        for(int i=0;i<s.size();i++){
            if(c>=s[i]){
                c=s[i];
            }
        }
        map<string,int>m;
        for(int i=0;i<x;i++){
            if(s[0]==c)
                m[s]=i;
            if(s[i]==c&& i!=0)
            {
                cout << c << i<<endl;
                int in=i;
                int jj=0;
                for(int kk=0;kk<x-i;kk++){
                string ss="",s1=s;
                for(int j=in;j>=jj;j--)
                    ss+=s[j];
                for(int k=in+1;k<x;k++)
                    ss+=s[k];
                cout << ss <<endl;

                in++;
                jj++;
                }
            }
        }
    }
}
