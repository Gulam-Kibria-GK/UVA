/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;
const int n=10000000;
bitset<n+2>a;

int arr[10000000];

void sieve()
{
    int i,j,l=0;
    for(i=4; i<n; i+=2)
    {
        a[i]=1;
    }
    for(i=3; i*i<n; i+=2)
    {
        if(a[i]==0)
        {
            for(j=i*i; j<n; j=j+(i*2))
            {
                a[j]=1;
            }
        }
    }
    for(i=2; i<n; i++)
    {
        if(a[i]==0)
        {
            arr[l]=i;
            l++;
        }

    }
}

int isPrime(int n)
{
    int i;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int x,y,z,i,j,f,ma;
    sieve();
    //int k;
    while(scanf("%d",&x)!=EOF)
    {
        if(x==0)
            break;
         f=0;
        for(i=0; arr[i]<=n/2; i++)
        {
            y=arr[i];
            z=x-arr[i];
            ma=isPrime(z);
            if(ma==1)
            {
                f=1;
                break;
            }

        }
        if(f==1)
        {
            cout<<x<<":"<<endl<<y<<"+"<<z<<endl;
        }
        else
            cout<<x<<":"<<endl<<"NO WAY!"<<endl;

    }
    return 0;
}
