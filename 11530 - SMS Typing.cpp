/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,j,n;
    char st[1000];
    cin>>n;
    getchar();
    for(i=1;i<=n;i++)
    {
        scanf("%[a-z, ]s",st);
        x=strlen(st);
        int sum=0;
        getchar();
        for(j=0;j<x;j++)
        {
            if(st[j]=='a' || st[j]=='d' || st[j]=='g' || st[j]=='j' || st[j]=='m' || st[j]=='p' || st[j]=='t' || st[j]=='w' || st[j]==' ')
                sum+=1;
            else if(st[j]=='b' || st[j]=='e' || st[j]=='h' || st[j]=='k' || st[j]=='n' || st[j]=='q' || st[j]=='u' || st[j]=='x')
                sum+=2;
            else if(st[j]=='c' || st[j]=='i' || st[j]=='l' || st[j]=='o' || st[j]=='f' || st[j]=='r' || st[j]=='v' || st[j]=='y')
                sum+=3;
            else
                sum+=4;
        }
            cout<<"Case #"<<i<<": "<<sum<<endl;
    }
}
