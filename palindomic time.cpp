
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h,m,min,flg=0,flg2=0;
    string hh,mm;
    scanf("%d:%d",&h,&m);
    min=h*60+m;
    if(min>=1412)
    {
        cout<<"00:00"<<endl;
        return 0;
    }
    for(int i=h; i<=23;i++)
    {
        flg2++;
        if(i>=1 && i<=9)
        {
            hh = "0";
        }
        hh=hh+to_string(i);
        if(flg2==2)
            m=0;
        for(int j=m+1 ; j<=59;j++)
        {
            if(j>=1 && j<=9)
            {
                mm="0";
            }
            mm=mm+to_string(j);
            reverse(mm.begin(), mm.end());
            if(hh==mm)
            {
                flg=1;
                reverse(mm.begin(), mm.end());
                break;
            }
            mm.clear();
        }
        if(flg==1)
        {
            break;
        }
        hh.clear();
    }
    cout<<hh<<":"<<mm<<endl;
    return 0;
}
