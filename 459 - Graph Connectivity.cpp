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
vector<ll>v[1000000];
ll satus[1000000];
ll per[1000000];
#define pb push_back
int wh=0;
int gr=1;
int bl=-1;

void dfs(ll s)
{
    ll i,j,k,u,vn;
    satus[s]=gr;
    ll siz=v[s].size();
    for(i=0; i<siz; i++)
    {
        if(satus[v[s][i]]==wh)
        {
            dfs(v[s][i])  ;
        }
    }
    satus[s]=bl;
}

int main()
{
    ll i,j,k,l,n,m,a,b,s,d;
    cin>>m;
    getchar();
    getchar();
    while(m--)
    {
        memset(v,0,sizeof(v));
        memset(satus,0,sizeof(satus));
        string st;
        getline(cin,st);
        n=st[0]-64;
        while (getline(cin,st) && st[0]!='\0')
        {
            //getchar();
            a=st[0]-64;
            b=st[1]-64;
            //cout<<a<<" "<<b<<endl;
            v[a].pb(b);
            v[b].pb(a);
        }
        int c=0;
        for(i=1; i<=n; i++)
        {
            if(satus[i]==wh)
            {
                c++;
                dfs(i);
            }
        }
        cout<<c<<endl;
        if(m)cout<<endl;
    }

}
/*************
1

E
AB
CE
DB
EC
*************/

