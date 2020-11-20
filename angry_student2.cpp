#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t,k;
   int m=0,j=0;
   string s;
   cin>>t;
   while(t--)
   {
       cin>>k;
       cin.ignore();
       getline(cin,s);
       //int len= s.length();

       for(int i=k-1; i>-1; i--)
       {
           if(s[i]=='A')
           {
               if(j>m)
                m=j;
                j=0;

           }
           else{
            j++;
           }
       }
       cout<<m<<"\n";
   }

   return 0;
}
