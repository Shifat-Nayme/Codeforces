#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int a,b;
    int t;
    long long int y;
    string s1,s2;
    int len1 =0, len2=0;
    cin>>a>>b;
    cin.ignore();
    getline(cin,s1);
    getline(cin,s2);
    len1 =s1.length();
    len2 =s2.length();
    char s3[100],s4[100],s5[100];


    cin>>t;
    while(t--)
    {
        int w1=0,w2=0;

        cin>>y;
        if(y>=a)
        {
            if(y%a==0)
            {
               w1 =a;
            }
            else{
                w1=y%a;
            }

        }

        if(y>=b)
        {
            if(y%b==0)
            {
               w2 =b;
            }
            else{
                w2=y%b;
            }
        }
        w1 =w1-1 ;
        w2=w2-1;

        //cout<<w1<<" "<<w2<<endl;
        int ara1[10]={0}, ara2[10]={0};
        int k=1;


        for(int i=0; i<len1; i++)
        {
            if(s1[i]==' ')
            {
                ara1[k]=1+i;
                k++;
            }
        }
        //cout<<ara1[0]<<" "<<ara1[1]<<endl;

        k=1;
        for(int i=0; i<len2; i++)
        {
            if(s2[i]==' ')
            {
                ara2[k]=1+i;
                k++;
            }
        }

        int f1=0,f2=0,j=0;
        f1 = ara1[w1];
        f2 = ara2[w2];
        cout<<f1<<" "<<f2<<endl;
        //int x =f1, y=f2;
        //cout<<"i="<<f1<<endl;

        while(s1[f1]!=' ')
        {
            if(s1[f1]=='\0')
                break;

            s3[j] = s1[f1];
            cout<<"s3j"<<s3[j]<<" "<<"s1f1"<<s1[f1]<<endl;
                j++;

            f1++;
        }
        s3[j] = '\0';

        cout<<s3<<endl;

        //cout<<"y="<<f2<<endl;
        j=0;

        while(s2[f2]!=' ')
        {
            if(s2[f2]=='\0')
                break;
            s4[j] = s2[f2];
            cout<<"s4j"<<s4[j]<<" "<<"s2f2"<<s2[f2]<<endl;
                j++;

            f2++;
        }

        s4[j]='\0';

        cout<<s4<<endl;

        cout<<strcat(s3,s4)<<endl;

        //cout<<s5<<endl;

    }

    return 0;
}
