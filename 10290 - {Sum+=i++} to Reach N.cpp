/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll n=100000005;
ll arr[n+5],l=0;

bool Check(ll N,ll pos)
{
    return (bool)(N & (1<<pos));
}
ll Set(ll N,ll pos)
{
    return N=N | (1<<pos);
}

ll status[(n/32)+2];
void sieve()
{
    ll i, j, sqrtN;
    sqrtN = ( sqrt( n ) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= n; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31)   ;
            }
        }
    }

    arr[l++]=2;
    for(i=3; i<=n; i+=2)
        if( Check(status[i>>5],i&31)==0)
        {
            arr[l++]=i;

        }
}

ll countOddPrimeFactors(ll nn)
{
    ll result = 1,i,j;
    for ( i=0; arr[i]*arr[i]<= nn; i++)
    {
        if(nn%arr[i]==0)
        {
            ll divCount = 0;
            while (nn%arr[i] == 0)
            {
                if(nn%2)++divCount;
                nn /= arr[i];
            }
            result*= (divCount + 1);
        }
    }
    if (nn > 1)
        result *= 2;
    return result;
}
int main()
{
    ll i,j,k,nn,m,a;
    sieve();
    while(scanf("%lld",&nn)!=EOF)
    {
        if(nn==0)cout<<0<<endl;
        else
            cout<<countOddPrimeFactors(nn)<<endl;
    }
}
