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
    ll i,j,k=1,l,n,m,a,b;
    ll arr[50004],arr2[50004],f=1;
    while(cin>>n){
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        k=1;
        for(i=0;i<n-1;i++){
            arr2[k++]=abs(arr[i+1]-arr[i]);
        }
        ll c=1;
        sort(arr2+1,arr2+k);
        for(i=1;i<k;i++){
            if(arr2[i]!=i){
               c=0;
               break;
            }
        }
        if(c)cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
    }
    return 0;
}
