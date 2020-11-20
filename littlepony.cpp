#include<stdio.h>
//#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    long long int m,n;
    double expr=0;
    cin>>m>>n;
    for(int i=1; i<=m; i++)
    {
        expr += i* ( pow(1.0*i/m,n)- pow((1.0*i-1)/m,n));
    }
    std::cout <<std::fixed;
    std::cout <<std::setprecision(12);
    cout<<expr<<endl;

    return 0;

}
