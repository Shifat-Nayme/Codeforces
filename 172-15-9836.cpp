#include <stdio.h>
#include <string.h>
int main()
{
   char str[50];
   scanf("%s",str);
   for(int i=0; str[i]; i++)
   {
       if(str[i]=='+'|| str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='=')
       {
           printf("operator %c\n",str[i]);
       }
       else
       {
           printf("identifier %c\n",str[i]);
       }
   }
   return 0;

}
