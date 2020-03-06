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
const ll n=20000005;
bitset<n+6>dp;
ll arr[n+5],l=0;
vector<pair<ll,ll> >v;
void sieve(){
    ll i,j;
    dp.set();
   for(i=2;i*i<=n;i++){
        if(dp[i]){
            for(j=i*2;j<=n;j+=i){
                dp[j]=0;
            }
        }
   }
   for(i=2;i<n;i++){
    if(dp[i]==1){
        arr[l++]=i;
    }
   }
}

ll ans(ll n){
    int c=0;
    for(ll i=0;i<n;i++){
        if(arr[i]>n)return c;
        else{
            if(n%arr[i]==0)c++;
        }
    }
    return c;
}
int main()
{
    ll i,j,k,l,nn,m,x=0;
    sieve();
    while(scanf("%lld",&nn)==1){
            if(nn==0)break;
        cout<<nn<<" : "<<ans(nn)<<endl;
    }
    return 0;
}
