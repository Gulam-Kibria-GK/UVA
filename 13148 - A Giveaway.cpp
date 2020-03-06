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

map<ll,ll>mm;
vector<ll>v,v2;



void ans()
{
    ll i,j,k=0,k1=0;
    v.push_back(1);
    for(i=2; i<10009; i++)
    {
        k=i*i;
        k1=i*i*i;
        v2.push_back(k);
        mm[k]++;
        mm[k1]++;
        // cout<<i<<" "<<k<<" "<<k1<<endl;
    }
    for(i=0; i<v2.size(); i++)
    {
        if(mm[v2[i]]==2)
        {
            //cout<<v2[i]<<endl;
            v.push_back(v2[i]);
        }
    }
}

int main()
{
    ll i,j,k,l,n,m,a=0;
    ans();
    m=v.size();
    while(cin>>n)
    {
        if(n==0)return 0;
        a=0;
        for(i=0; i<m; i++)
        {
            if(n==v[i])
            {
                cout<<"Special"<<endl;
                a=1;
            }
        }
        if(a==0)
            cout<<"Ordinary"<<endl;
    }
}

