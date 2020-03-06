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
vector<ll>v,v2;
long long n,m;

void ans(ll a)
{
    ll i,j,k,l,x1=-1,x2=-1;
    for(i=0;i<n;i++){
        if(v[i]<a){
            x1=v[i];
        }else if(v[i]>a){
            x2=v[i];
            break;
        }
    }
    //cout<<x1<<" "<<x2<<endl;
    if(x1==-1){
        cout<<'X';
    }
    else{
        cout<<x1;
    }
    cout<<" ";
    if(x2==-1){
        cout<<'X';
    }
    else{
        cout<<x2;
    }
    cout<<endl;
}



int main()
{
    ll i,j,k,l,a,b;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    cin>>m;
    for(i=0;i<m;i++){
        cin>>a;
        ans(a);
    }
    return 0;
}
