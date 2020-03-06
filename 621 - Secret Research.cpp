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
    ll i,j,k,l,n,m,a,b;
    cin>>k;
    string st;
    while(k--){
        cin>>st;
        n=st.size();
        if(st=="1" || st=="4" || st=="78"){
            cout<<"+"<<endl;
        }
        else if(st[n-1]=='5' && st[n-2]=='3'){
            cout<<"-"<<endl;
        }
        else if(st[0]=='9' && st[n-1]=='4'){
            cout<<"*"<<endl;
        }
        else{
            cout<<"?"<<endl;
        }
    }
}
