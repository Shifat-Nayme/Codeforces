#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
     string name;
     int ara[26]={0};
     int len=0;
     int cnt=0;
     int g=0;
     getline(cin,name);
     len = name.length();

     for(int i=0; i<len; i++)
     {
         g = name[i]- 'a';
         if(ara[g]==0)
         {
             ara[g]=1;
             cnt++;
         }
     }

     if(cnt%2==0)
     {
         cout<<"CHAT WITH HER!"<<endl;
     }
     else{
        cout<<"IGNORE HIM!"<<endl;
     }
     return 0;
}
