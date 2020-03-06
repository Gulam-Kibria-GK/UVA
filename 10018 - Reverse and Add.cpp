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
long long sum(long long valu,ll j=0)
{
    long long i,t,x=1,a,b;
    b=valu;
    t=valu%10;
    valu=valu/10;
    while(valu!=0)
    {
        a=valu%10;
        t=(t*10)+a;
        valu=valu/10;
    }
    if(b==t)
    {
        cout<<j<<" ";
        j=0;
        return t;
    }
    else
    {
        j++;
        return sum(b+t,j);

    }
}
int main()
{
    ll n,i,j=0;
    cin>>n;
    ll a[n+3];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        ll h=sum(a[i],j);
        cout<<h<<endl;
    }
    return 0;
}
