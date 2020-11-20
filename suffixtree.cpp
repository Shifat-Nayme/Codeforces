#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int len=0;
    char str[1000], str2[6];
    while(T--)
    {
        scanf("%s",str);
        len = strlen(str);
        int cnt=0, j=0;
        for(int i=len-5; cnt!=5; i++)
        {
            str2[j]=str[i];
            j++; cnt++;
        }
        if(str2[3]=='p')
        {
            cout<<"FILIPINO"<<endl;
        }
        else if(str2[2]=='i')
        {
            cout<<"KOREAN"<<endl;
        }
        else{
            cout<<"JAPANESE"<<endl;
        }

    }
    return 0;

}
