#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

void bin(int n, char a[])
{
    if(n<1)
    {
      printf("\n%s",a);
    }
    else
    {
        a[n-1]='0';
        bin(n-1,a);
        a[n-1]='1';
        bin(n-1,a);
    }
}


int main()
{

    char a[3];
    //a[10]='\0';
    bin(2,a);
}

