#include <stdio.h>
#include<bits/stdc++.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
    string s;
    string temp;
    int fi=0;
    cin>>s;
    temp=s;
    int c=0;
    int len = s.length();
    //len = len-1;
    int k=0;
    int cnt=0;
    int ind =2;
    int inc=0;
    for(int i=0; i<len-2; i++)
    {


        for(int j=ind+inc; j>=fi; j--)
        {
            temp[c]=s[j];
            c++;
        }
        inc++;
        cnt++;
        c=cnt+0;
        fi++;
        k++;
        cout<<temp<<endl;
        s = temp;
    }
}
