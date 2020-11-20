#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int mat[5][5];
    int i,j,ans=0;
    int flg1=0,flg2=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
               flg1=i;
               flg2=j;
            }
        }
    }
    flg1 = abs(flg1-2);
    flg2 = abs(flg2-2);
    ans = flg1+flg2;

    cout<<ans<<endl;
    return 0;

}
