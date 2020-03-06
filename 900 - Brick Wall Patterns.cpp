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

int main()
{
    ll i,j,k,n,m,f,s;
    ll arr[10000+3];
    arr[1]=1;
    arr[2]=2;
    for(i=3;i<10002;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    while(cin>>n){
        if(n==0)break;
        cout<<arr[n]<<endl;
    }
}
