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
const ll MAX=10000001;

ll d_primes[MAX];
ll prime[MAX];

void sieve()
{
    ll i, j, x, n, p;
    n = MAX;
    x=sqrt(n);
    prime[0]=1;
    prime[1]=1;
    for(i=4; i<=n; i+=2)
    {
        prime[i] = 1;
    }
    for(i =3; i<=x; i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i+i; j<=n; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    return;
}

ll sum(ll n)
{
    ll sum=0, r;
    while(n!=0)
    {
        r=n%10;
        n/=10;
        sum += r;
    }
    return sum;
}


int main()
{
    ll a, b, t, i, coun=0;
    sieve();
    for(i = 0; i<=1000000; i++)
    {
        if(prime[i]==0 && prime[sum(i)]==0)
            coun++;

        d_primes[i] = coun;
    }
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", d_primes[b]-d_primes[a-1]);
    }
    return 0;
}
