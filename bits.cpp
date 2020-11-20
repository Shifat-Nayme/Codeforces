#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0;
    string ch;

    for(int i=0; i<n; i++)
    {
        cin>>ch;

        if(ch[1]== '+')
        {
            x++;
        }
        else{
            x--;
        }
    }

    cout<<x<<endl;

    return 0;

}
