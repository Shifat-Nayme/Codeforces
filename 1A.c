#include<stdio.h>

int main()
{
     long long int m ,n, a, x,y;
    scanf("%I64d %I64d %I64d", &m, &n, &a);

    x=n/a;
    y=m/a;
    if(n%a!=0) x++;
    if(m%a!=0) y++;
    printf("%I64d\n", x*y);

    return 0;
}
