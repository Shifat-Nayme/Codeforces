#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int sum=0,cnt=0;
    cin>>s;
    int len= s.length();
    if(len==1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        for(int i=0; i<len; i++)
        {
            sum=sum+ s[i]-'0';
        }
        cnt++;
        string l=to_string(sum);
        int len2=l.length();
        while(len2>1)
        {
            sum=0;
            for(int i=0;i<len2; i++)
            {
                sum=sum+ l[i]-'0';
            }
            l = to_string(sum);
            len2 = l.length();
            cnt++;

        }

        cout<<cnt<<endl;
    }
    return 0;


}
