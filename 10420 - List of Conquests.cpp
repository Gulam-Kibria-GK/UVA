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
map<string,ll>mm;
vector<string>v;
int main()
{
    ll i,j,k,l,n,m,a,b,c;
    cin>>n;
    string st,st2;
    getchar();
    for(i=0;i<n;i++){
        getline(cin,st);
        m=st.size();
        st2="";
        for(j=0;j<m;j++){
            if(st[j]==' ')break;
            st2+=st[j];
        }
        if(mm[st2]==0)
            v.push_back(st2);
        mm[st2]++;

    }
    a=v.size();
    sort(v.begin(),v.end());
    for(j=0;j<a;j++){
        cout<<v[j]<<" "<<mm[v[j]]<<endl;
    }
    return 0;
}
