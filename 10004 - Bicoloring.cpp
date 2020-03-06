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
vector<ll>v[10000000];
ll vis_col[1000000];
ll dis[1000000];
ll wh=1,bl=2,col;
ll f=0;

void bfs(ll s)
{
    ll i,j,k,u,vn,siz;
    queue<ll>q;
    q.push(s);
    dis[s]=0;
    vis_col[s]=wh;
    while(q.size()){
        u=q.front();
        q.pop();
        siz=v[u].size();
        for(i=0; i<siz; i++)
        {
            vn=v[u][i];
            if(vis_col[vn]==0){
                q.push(vn);
                dis[vn]=dis[u]+1;
                if(dis[vn]%2==0) vis_col[vn]=wh;
                else vis_col[vn]=bl;
            }
            if(vis_col[u]==vis_col[vn])f=1;
        }
    }
}
int main()
{
    int i,j,k,l,n,m,a,b;
    while(cin>>n){
        memset(v,0,sizeof(v));
        memset(vis_col,0,sizeof(vis_col));
        memset(dis,0,sizeof(dis));
        f=0;
        if(n==0)return 0;
        cin>>m;
        for(i=0; i<m; i++){
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        bfs(0);
        if(f%2==0) cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;
    }
}
