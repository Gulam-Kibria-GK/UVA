#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isLeapYear(ll year)
{
    if (year % 400 == 0)
        return true;
    else if(year % 100 == 0)
        return false;
    else if(year % 4 == 0)
        return true;
    else
        return false;
}

int main()
{
    ll i,j=0,k,n,a,b,d,m,y1,y2;
    cin>>k;
    while(k--)
    {
        j++;
        cin>>d>>m>>y1>>y2;
        cout<<"Case "<<j<<": ";
        if(d==29 && m==2)
        {
            ll ans=0;
            for(i=y1+1; i<=y2; i++)
            {
                ll s=isLeapYear(i);
                if(s)
                {
                    ans+=1;
                }
            }
            cout<<ans<<endl;

        }
        else
        {
            cout<<y2-y1<<endl;
        }
    }
}
