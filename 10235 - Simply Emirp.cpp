/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;

const int n=10000900;
bitset<n+3>a;
int arr[1000000];

void sieve()
{
    int i,j,k;
    a.set();
    for(i=4; i<n; i+=2)
        a[i]=0;
    for(i=3; i*i<n; i+=2)
    {
        if(a[i])
        {
            for(j=i*i; j<n; j+=(i*2))
            {
                a[j]=0;
            }
        }
    }
    int l=0;
    for(i=2; i<n; i++)
    {
        if(a[i])
        {
            arr[l]=i;
            l++;
        }
    }
}


int main()
{
    int i,x,y,z=1,f,f2,d;
    sieve();

    while(scanf("%d",&x)!=EOF)
    {
        if(x==2 || x==3 || x==5 || x==7)
        {
            cout<<x<<" is prime."<<endl;
        }
        else
        {

            d=x;
            f=0;
            for(i=0; arr[i]<x; i++)
            {
                if(x%arr[i]==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                z=x%10;
                x=x/10;
                while(x!=0)
                {
                    y=x%10;
                    z=(z*10)+y;
                    x=x/10;
                }
                f2=0;
                for(i=0; arr[i]<z; i++)
                {
                    if(z%arr[i]==0)
                    {
                        f2=1;
                        break;
                    }
                }
                if(f2==0 && d!=z)
                {
                    cout<<d<<" is emirp."<<endl;
                }
                else
                {
                    cout<<d<<" is prime."<<endl;
                }
            }
            else
            {
                cout<<x<<" is not prime."<<endl;
            }
        }
    }
    return 0;
}
