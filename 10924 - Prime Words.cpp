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
    int i,n,t,x,sum;
    char st[100];
    while(scanf("%s",st)!=EOF)
    {
        getchar();
        x=strlen(st);
        sum=0;
        for(i=0; i<x; i++)
        {
            if(st[i]>=97 && st[i]<=122)
            {
                sum+=(st[i]-96);
            }
            else if(st[i]>=65 && st[i]<=90)
            {
                sum+=(st[i]-38);
            }
        }
        int k=0;
        if(sum==1)
        {
            cout<<"It is a prime word."<<endl;
        }
        else
        {
            for(i=1; i<=sum; i++)
            {
                if(sum%i==0)
                {
                    k++;
                }
            }
            if(k==2)
                cout<<"It is a prime word."<<endl;
            else
                cout<<"It is not a prime word."<<endl;
        }
    }
}
