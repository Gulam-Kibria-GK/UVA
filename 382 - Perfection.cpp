/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/


#include <bits/stdc++.h>
using namespace std;

#define T(a)            cerr << #a << ": " << a << endl;
#define TT(a,b)         cerr << #a << ": " << a << " | " << #b << ": " << b << endl;
#define TTT(a,b,c)      cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << endl;
#define TTTT(a,b,c,d)   cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;

///**** Max/Min********///

#define _max(aa, bb) (aa = max(aa, bb))
#define _min(aa, bb) (aa = min(aa, bb))


#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define open  freopen("input.txt","r",stdin)
#define close  freopen ("output.txt","w",stdout)

#define mem(n) memset(n,0,sizeof(n))
#define LCM(a,b) (a / __gcd(a,b) ) * b
#define gcd(a,b) __gcd(a,b)
#define for0(l,n) for(int l=0;l<n;l++)
#define for1(l,n) for(int l=1;l<=n;l++)


#define db double
#define ll long long
#define lll unsigned long long
#define loop(i,a,n) for(int i=a;i<=n;i++)
#define sz size()
#define sf scanf
#define sf1(a) sf("%d",&a)
#define sf2(a,b) sf("%d %d",&a,&b)
#define sf3(a,b,c) sf("%d %d %d",&a,&b,&c)
#define sf4(a,b,c,d) sf("%d %d %d %d",&a,&b,&c,&d)
#define sfd(a) sf("%lf",&a)
#define sfd2(a,b) sf("%lf %lf",&a,&b)
#define sfd3(a,b,c) sf("%lf %lf %lf",&a,&b,&c)
#define sfl1(a) sf("%lld",&a)
#define sfl2(a,b) sf("%lld %lld",&a,&b)
#define sfl3(a,b,c) sf("%lld %lld %lld",&a,&b,&c)

#define pf printf
#define pfi(x) pf("%d",x)
#define pfl(x) pf("%lld",x)
#define pf1(x) pf("%d\n",x)
#define pf2(x,y) pf("%d %d\n",x,y)
#define pf3(x,y,z) pf("%d %d %d\n",x,y,z)
#define pfl1(x) pf("%lld\n",x)
#define pfl2(x,y) pf("%lld %lld\n",x,y)
#define pfl3(x,y,z) pf("%lld %lld %lld\n",x,y,z)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define Yes printf("Yes\n")
#define No printf("No\n")

#define pfd(x,k) cout<<fixed<<setprecision(k)<<x;

int main()
{
    int i,j,k,l,n,m,a=1,b;
    while(sf1(n)==1)
    {
        if(n==0){cout<<"END OF OUTPUT"<<endl;return 0;}
        if(a==1)
        {
            cout<<"PERFECTION OUTPUT"<<endl;
            a=0;
        }
        ll z=0,zz;
        zz=n;
        while(zz){
            z++;
        zz/=10;
        }
        int c=0;
        for(i=1; i<=n/2; i++)
        {
            if(n%i==0)
            {
                c+=i;
            }
        }
        if(c==n)
        {
            for(j=0;j<5-z;j++){
                cout<<" ";
            }
            cout<<n<<"  "<<"PERFECT"<<endl;
        }
        else if(c>n)
        {
            for(j=0;j<5-z;j++){
                cout<<" ";
            }
            cout<<n<<"  "<<"ABUNDANT"<<endl;
        }
        else if(c<n)
        {
            for(j=0;j<5-z;j++){
                cout<<" ";
            }
            cout<<n<<"  "<<"DEFICIENT"<<endl;
        }
    }

    return 0;
}
