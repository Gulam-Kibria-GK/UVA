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
vector<ll>v[100000];
ll level[100000];
ll vis[100000];
ll ans;

void bfs(ll x,ll y){
    ll i,j,k,l,f,siz,vn;
    queue<ll>q;
    q.push(x);
    vis[x]=1;
    level[x]=0;
    ans++;
    while(q.size()){
        f=q.front();
        q.pop();
        if(level[f]==y)return;
        siz=v[f].size();
        for(i=0;i<siz;i++){
            vn=v[f][i];
            if(vis[vn]==0){
                ans++;
                q.push(vn);
                level[vn]=level[f]+1;
                vis[vn]=1;
            }
        }
    }
}

int main()
{
    ll i,j,k,l,n,m,a,b,x,y,it=0;
    while(cin>>n){
        if(n==0)break;
        ll node=0;
        map<ll,ll>mm;
        for(i=0;i<n;i++){
            cin>>a>>b;
            if(mm[a]==0)mm[a]=1,node++;
            if(mm[b]==0)mm[b]=1,node++;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        while(cin>>x>>y){
            memset(vis,0,sizeof(vis));
            memset(level,0,sizeof(level));
            if(x==0 && y==0)break;
            it++;
            ans=0;
            bfs(x,y);
            ll ans2=node-ans;
            cout<<"Case "<<it<<": "<<ans2<<" nodes not reachable from node "<<x<<" with TTL = "<<y<<"."<<endl;
        }
        mm.clear();
        for(i=0;i<100000;i++)v[i].clear();
    }
}
