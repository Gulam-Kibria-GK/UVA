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
    for(i=0;i<l-1;i++){
        if(arr[i+1]-arr[i]==2){
            v.push_back({arr[i],arr[i+1]});
        }
    }
}

int main()
{
    ll i,j,k,l,nn,m,x=0;
    sieve();
    while(cin>>nn){
        cout<<"("<<v[nn-1].first<<", "<<v[nn-1].second<<")"<<endl;
    }
    return 0;
}
