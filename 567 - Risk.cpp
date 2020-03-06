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
ll vis[1000];
ll dis[1000];
vector <int> v[1000];
void bfs(int s)
{
    ll i,j,k,l,siz,u,vn;
    queue<ll>q;
    q.push(s);
   // vis[s]=1;
    dis[s]=0;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        siz= v[u].size();
        for(i=0; i<siz; i++)
        {
            vn=v[u][i];
            if(dis[vn]==-1)
            {
                q.push(vn);
                //vis[vn]=1;
                dis[vn]=dis[u]+1;
            }
        }
    }
}

int main()
{
    ll i,j,k,l,n,m,a,b,c=0;
    while(scanf("%lld",&n)!=EOF){
        for(i=0;i<n;i++){
            cin>>m;
            v[1].pb(m);
            v[m].pb(1);
        }
        for(i=2;i<20;i++){
            scanf("%lld",&a);
            while(a--){
                scanf("%lld",&b);
                v[i].pb(b);
                v[b].pb(i);
            }
        }
        scanf("%lld",&k);
        ll s,d;
        cout<<"Test Set #"<<++c<<"\n";
        while(k--){
           // memset(vis,-1,sizeof(vis));
            memset(dis,-1,sizeof(dis));
            scanf("%lld %lld",&s,&d);
            bfs(s);
            printf("%2lld to %2lld: %lld\n",s,d,dis[d]);
        }
        cout<<"\n";
        for(i=1;i<100;i++){
            v[i].clear();
        }
    }
    return 0;
}
