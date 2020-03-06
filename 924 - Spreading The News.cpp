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
ll i,j,k,l,n,m,a,b;
ll M,D;
vector<ll>v[50000];

ll dis[100000],fri[50000];

void bfs(ll s){
    queue<ll>q;
    ll ff,sz,d=0;
    q.push(s);
    while(q.size()){
        ff=q.front();
        q.pop();
        sz=v[ff].size();
        dis[s]=0;
        for(i=0;i<sz;i++){
            if(dis[v[ff][i]]==-1){
                dis[v[ff][i]]=dis[ff]+1;
                q.push(v[ff][i]);
                fri[dis[v[ff][i]]]++;
            }
        }
    }
    for(i=0;i<n;i++){
        if(fri[i]>M){
            M=fri[i];
            D=i;
        }
    }
}


int main(){
    ll t,x,y,z;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
            while(x--){
            cin>>a;
            v[i].push_back(a);
        }
    }
    cin>>b;
    while(b--){
        cin>>z;
        M=-1,D=0;
        if(v[z].size()){
            memset(dis,-1,sizeof(dis));
            memset(fri,0,sizeof(fri));
            bfs(z);
            cout<<M<<" "<<D<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}
