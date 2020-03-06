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
int main()
{
    ll i,j,n,k,a,f,b,l,max2=0,max1;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld %lld",&a,&b);
        for(j=a; j<=b; j++)
        {
            l=sqrt(j);
            f=0;
            for(k=1; k<=l; k++)
            {
                if(j%k==0)
                {
                    f++;

                    if(j/k!=k)
                    {
                        f++;
                    }

                }
            }
            if(max2<f)
            {
                max2=f;
                max1=j;
            }
            f=0;
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,max1,max2);
        max2=0;
        max1=0;
    }
    return 0;
}
