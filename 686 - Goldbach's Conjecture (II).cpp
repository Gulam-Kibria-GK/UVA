/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/


#include<bits/stdc++.h>
using namespace std;

int n=100000;
int arr[100000];


void sieve()
{
    int i,j;
    int a[n+3];

    for(i=4;i<n;i+=2)
    {
        a[i]=1;
    }
    for(i=3;i*i<n;i+=2)
    {
        if(a[i]==0)
        {
            for(j=i*i;j<n;j=j+(i*2))
            {
                a[j]=1;
            }
        }

    }
    int l=0;
    for(i=2;i<n;i++)
    {
        if(a[i]==0)
        {
            arr[l]=i;
            l=l+1;
        }
    }
}
int main()
{
    int x,y,i,j;
    sieve();
    int k;
    while(scanf("%d",&x)!=EOF)
    {
        if(x==0)
            break;
        k=0;
        for(i=0;arr[i]<=x/2;i++)
        {
            for(j=0;arr[j]<=x;j++)
            {
                if(arr[i]+arr[j]==x)
                {
                    k+=1;
                    //cout<<arr[i]<<"  "<<arr[j]<<endl;
                    break;
                }
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
