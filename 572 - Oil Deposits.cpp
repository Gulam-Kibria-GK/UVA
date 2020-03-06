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
char ch[10005][10005];
ll vis [10005][10005];
ll dx[]= {0,0,-1,1,1,-1,1,-1};
ll dy[]= {1,-1,-1,1,0,0,-1,1};
ll n,m,a,b;

bool check(ll x,ll y)
{
    if(x>=0 && y>=0 && x<n && y<m && !vis[x][y] && ch[x][y]=='@')return true;
    else return false;
}

void bfs(ll s,ll d)
{
    ll i,j,k,vn,siz;
    pair<ll,ll> u;
    queue<pair<ll,ll> >q;
    q.push({s,d});
    vis[s][d]=1;
    while(q.size())
    {
        u=q.front();
        q.pop();
        for(i=0; i<8; i++)
        {
            ll x=u.first+dx[i];
            ll y=u.second+dy[i];
            if(check(x,y))
            {
                q.push({x,y});
                vis[x][y]=1;
            }
        }
    }
}

int main()
{
    ll i,j,k,l;
    while(cin>>n>>m)
    {
        ll c=0;
        if(n==0 || m==0)exit(0);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>ch[i][j];
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(ch[i][j]=='@' && vis[i][j]==0)
                {
                    bfs(i,j);
                    c++;
                }
            }
        }
        cout<<c<<endl;
        memset(vis,0,sizeof(vis));
    }
    return 0;
}
