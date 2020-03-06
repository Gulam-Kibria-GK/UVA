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
    ll i,j,k,l,n,m;
    cin>>n;
    while(n--)
    {
        ll ans,hi=1000000000,lo=0,mid,t;
        cin>>m;
        while(lo<=hi)
        {
            mid=(lo+hi)/2;
            t=(mid*(mid+1))/2;
            if(t<=m)
            {
                ans=mid;
                lo=mid+1;
            }
            else
                hi=mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}

