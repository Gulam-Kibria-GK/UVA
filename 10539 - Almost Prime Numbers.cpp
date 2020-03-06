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
vector< pair<ll,ll> >v;


void sieve(){
    ll i,j;
    dp.set();
    for(i=4;i<n;i+=2)dp[i]=0;
    for(i=3;i*i<n;i+=2){
        if(dp[i]==1){
            for(j=i*i;j<n;j+=(i*2)){
                dp[j]=0;
            }
        }
    }
    for(i=2;i<n;i++){
        if(dp[i]==1){
            arr[l]=i;
            l++;
        }
    }
}

ll ans(ll s,ll d){
    ll i,j,k,cnt=0;
    for(i=0;i<l;i++){
        if(arr[i]*arr[i]>d)break;
        for(j=arr[i]*arr[i];j<=d;j*=arr[i]){
            if(j>=s && j<=d)cnt++;
        }
    }
    return cnt;
}


int main(){
    ll i,j,k,nn,m,a,b;
    sieve();
    scanf("%lld",&nn);
    while(nn--){
        scanf("%lld %lld",&i,&j);
        ll vv=ans(i,j);
        printf("%lld\n",vv);
    }
}
