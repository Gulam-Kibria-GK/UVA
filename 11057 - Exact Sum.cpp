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
vector<ll>v;


int main()
{
    ll i,j,k,l,n,m,a,b=0,tk;
    while(cin>>k)
    {
        while(k--)
        {
            cin>>a;
            v.push_back(a);
        }
        cin>>tk;
        sort(v.begin(),v.end());
        i=0,j=v.size()-1;
        while(i<j)
        {
            if(v[i]+v[j]<tk)
            {
                i++;
            }
            else if(v[i]+v[j]==tk)
            {
                a=i;
                b=j;
                j--;
            }
            else
            {
                j--;
            }
        }
        cout<<"Peter should buy books whose prices are "<<v[a]<<" and "<<v[b]<<"."<<endl<<endl;
        v.clear();
    }
}
