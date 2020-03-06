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
ll vis[1000000];
ll ans=0;

void bfs(ll s){
    ll i,j,vn,siz,f,countt=1;
    queue<ll>q;
    q.push(s);
    vis[s]=1;
    while(q.size()){
        f=q.front();
        q.pop();
        siz=v[f].size();
        for(i=0;i<siz;i++){
            vn=v[f][i];
            if(vis[vn]==0){
                q.push(vn);
                vis[vn]=1;
                countt++;
            }
        }
    }
    ans=max(ans,countt);
}


int main(){
    ll i,j,k,l,n,m,a,b,t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(i=0; i<m; i++){
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);

        }
        for(i=1;i<=n;i++){
            if(vis[i]==0){
                bfs(i);
            }
        }
        cout<<ans<<endl;
        memset(vis,0,sizeof(vis));
        for(i=1;i<n;i++)v[i].clear();
        ans=0;
    }
}
