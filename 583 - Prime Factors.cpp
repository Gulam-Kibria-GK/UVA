/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;
#define MAX 50000
#define size 6000
typedef long long ll;
int prime[size], status[MAX],factor[200];
int p, d;

void siv()
{
    int n, i, j;
    n=MAX;
    int sq= sqrt(n);
    for(i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(j=i*i; j<=n; j+=(i+i))
            {
                status[j]=1;
            }
        }
    }
    prime[0]=2;
    p=1;
    for(i=3; i<=n; i+=2)
    {
        if(status[i]==0)
        {
            prime[p++] = i;
        }
    }
}

void primeFactor(int n)
{
    int  i, j;
    int sq= sqrt(n);
    d=0;
    for(i=0; prime[i]<=sq; i++)
    {
        while(n%prime[i]==0)
        {
            factor[d++] = prime[i];
            n /= prime[i];
        }
    }
    if(n>1)
    {
        factor[d++] = n;
    }
}

int main()
{
    siv();
    ll n, c;
    while(cin >> n)
    {
        if(n==0)
            break;
        if(n<0)
        {
            n *=(-1);
            printf("-%lld = -1 x ", n);
            primeFactor(n);
            for(c=0 ; c<d ; c++)
            {
                if(c==d-1)
                {
                    printf("%d", factor[c]);
                }
                else
                {
                    printf("%d x ", factor[c]);
                }
            }
        }
        else
        {
            printf("%lld = ", n);
            primeFactor(n);
            for(c=0 ; c<d ; c++)
            {
                if(c==d-1)
                {
                    printf("%d", factor[c]);
                }
                else
                {
                    printf("%d x ", factor[c]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
