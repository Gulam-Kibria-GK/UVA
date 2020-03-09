#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j=0,e,kk,p,k,r;
    cin>>kk;
    while(kk--)
    {
        j++;
        cin>>e>>p>>k>>r;
        cout<<"Case "<<j<<": ";
        if(e<=p*k)
        {
            ll  ans=e/p;
            if(e%p)
                ans++;
            cout<<ans<<endl;
        }
        else
        {
            if((p*k)<=r)
            {
                cout<<-1<<endl;
                continue;
            }
            ll ans=e-(p*k);
            ll temp=(p*k)-r;
            ll hh=ans/temp;
            hh++;
            hh*=k;
            ll hh1=ans%temp;
            if(hh1!=0)
            {
                ll gg=(hh1+r)/p;
                if((hh1+r)%p)
                    gg++;
                hh+=gg;
            }
            cout<<hh<<endl;

        }
    }
}
