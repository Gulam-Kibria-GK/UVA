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
char arr[10000][10000];
ll vis[10000][10000];
ll c,n;
ll dp1[8]= {1,-1,0,0};
ll dp2[8]= {0,0,-1,1};

void dfs(ll i,ll j)
{
    ll vn,u;
    if(arr[i][j]=='.' || i<0 || j<0 || j>=n || i>=n)return ;
    arr[i][j]='.';
    for(ll s=0; s<4; s++)
    {
        ll x=i+dp1[s];
        ll y=j+dp2[s];
        dfs(x,y);
    }

}

int main()
{
    ll i,j,t,k,l=0,m,a;
    cin>>t;
    while(t--)
    {
        l++;
        c=0;
        cin>>n;
        for(i=0; i<n; i++)
            cin>>arr[i];
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(arr[i][j]=='x')
                {
                    c++;
                    dfs(i,j);
                }
            }
        }
        cout<<"Case "<<l<<": "<<c<<endl;
    }
}
