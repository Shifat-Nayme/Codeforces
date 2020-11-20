#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n;
    long double  rem=0;
    int i=1;
    cin>>n;
    while(n>0)
    {
       rem = rem + 1.0/n;
       n--;
    }
    std::cout << std::setprecision(12);
    std::cout << std::fixed;
    cout<< rem << endl;
}
