#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    string s1,s2;
    char s3[100];
    //s1 = "shi fa nay";
    getline(cin,s1);
    //cout<<s1<<endl;
    int j=0;
    int i;
    cin>>i;
//    for(int i=0; s1[i]!='\0'; i++)
//    {
//        cout<<s1[i]<<endl;
//    }
    while(s1[i]!=' ')
    {
        if(s1[i]!='\0')
        {
        s3[j] = s1[i];
        cout<<"sj"<<s3[j]<<" "<<"s1"<<s1[i]<<endl;
            j++;

        }
        i++;
    }
    cout<<j<<endl;
    s3[j]='\0';

//    for(int i=4; s1[i]!='/0'; i++)
//    {
//        if(s1[i]==' ')
//        {
//            break;
//        }
//        else{
//            s3[j] = s1[i];
//            j++;
//        }
//
//    }



    cout<<"ye="<<s3<<endl;



}
