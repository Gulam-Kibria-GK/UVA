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
#define pb push_back
vector<ll>v[100000];
ll vis[100000];
ll dis[100000];

void bfs(ll s)
{
    ll i,j,k,vn,u;
    queue<ll>q;
    q.push(s);
    vis[s]=1;
    dis[s]=0;
    while(q.size())
    {
        u=q.front();
        q.pop();
        ll siz=v[u].size();
        for(i=0; i<siz; i++)
        {
            vn=v[u][i];
            if(vis[vn]==0)
            {
                q.push(vn);
                vis[vn]=1;
                dis[vn]=dis[u]+1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i,j,t,k,l,n,m,a,b,c;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        cin>>n>>m;
        for(i=1; i<=m; i++){
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
        }
        bfs(0);
        for(i=1;i<n;i++){
            cout<<dis[i]<<endl;
        }
        memset(vis,0,sizeof(vis));
        memset(dis,0,sizeof(dis));
        for(i=0; i<n; i++){
            v[i].clear();
        }
        if(j!=t)cout<<endl;
    }
}
