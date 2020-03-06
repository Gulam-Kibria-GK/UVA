#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define s scanf
int main()
{
    ll i,k,t,j,a,b,c,aa,bb,cc;
    s("%lld",&t);
    for(i=1; i<=t; i++)
    {
        s("%lld %lld %lld",&a,&b,&c);
        ll g=0;
        ll h=0;
        for(j=a; j<=b; j++)
        {
            if(j%c==0)
            {
                aa=j;
                bb=(int)sqrt(aa);
                ll sum=0,f=0;
                for(k=1; k<=bb; k++)
                {
                    if(aa%k==0)
                    {
                        f++;
                        sum=sum+k;
                        if(aa/k!=k)
                        {
                            sum=sum+(aa/k);
                            f++;
                        }
                    }
                }
                g+=f;
                h+=sum;
            }
        }
        printf("%lld %lld\n",g,h);
        g=0;h=0;
    }
    return 0;
}

