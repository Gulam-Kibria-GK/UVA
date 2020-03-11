#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<pair<string,ll> >v;


ll solve(ll n,ll m){
    ll i,j,c,ans=0;
    for(i=0;i<n-1;i++){
        //--i
        if(v[i+1].first=="--i" && v[i].first=="i--"){
            c=0;
        }
        else if(v[i+1].first=="--i" && v[i].first=="--i"){
            c=1;
        }
        else if(v[i+1].first=="--i" && v[i].first=="i++"){
            c=0;
        }
        else if(v[i+1].first=="--i" && v[i].first=="++i"){
            c=-1;
        }
        else if(v[i+1].first=="--i" && v[i].first=="i"){
            c=0;
        }

        //i--
        else if(v[i+1].first=="i--" && v[i].first=="--i"){
            c=2;
        }
        else if(v[i+1].first=="i--" && v[i].first=="i--"){
            c=1;
        }
        else if(v[i+1].first=="i--" && v[i].first=="i++"){
            c=1;
        }
        else if(v[i+1].first=="i--" && v[i].first=="++i"){
            c=0;
        }
        else if(v[i+1].first=="i--" && v[i].first=="i"){
            c=1;
        }

        //i++
        else if(v[i+1].first=="i++" && v[i].first=="--i"){
            c=0;
        }
        else if(v[i+1].first=="i++" && v[i].first=="i--"){
            c=-1;
        }
        else if(v[i+1].first=="i++" && v[i].first=="i++"){
            c=-1;
        }
        else if(v[i+1].first=="i++" && v[i].first=="++i"){
            c=-2;
        }
        else if(v[i+1].first=="i++" && v[i].first=="i"){
            c=-1;
        }

        //++i
        else if(v[i+1].first=="++i" && v[i].first=="--i"){
            c=1;
        }
        else if(v[i+1].first=="++i" && v[i].first=="i--"){
            c=0;
        }
        else if(v[i+1].first=="++i" && v[i].first=="i++"){
            c=0;
        }
        else if(v[i+1].first=="++i" && v[i].first=="++i"){
            c=-1;
        }
        else if(v[i+1].first=="++i" && v[i].first=="i"){
            c=0;
        }

        //i
        else if(v[i+1].first=="i" && v[i].first=="--i"){
            c=1;
        }
        else if(v[i+1].first=="i" && v[i].first=="i--"){
            c=0;
        }
        else if(v[i+1].first=="i" && v[i].first=="i++"){
            c=0;
        }
        else if(v[i+1].first=="i" && v[i].first=="++i"){
            c=-1;
        }
        else if(v[i+1].first=="i" && v[i].first=="i"){
            c=0;
        }

        if(v[i+1].second==v[i].second+c)ans++;
        //else return ans;
    }
    return ans;
}



ll hexx(string st)
{
    ll k,i,j=0,kk=0;
    k=st.size();
    reverse(st.begin(),st.end());
    for(i=0; i<k-2; i++)
    {
        if(st[i]>='0' && st[i]<='9'){
            kk+=((st[i]-'0')*powl(16,j));
        }
        else{
            kk+=((st[i]-55)*powl(16,j));
        }
        j++;
    }
    return kk;
}

ll octt(string st)
{
    ll i,k,j=0,kk=0;
    k=st.size();
    reverse(st.begin(),st.end());
    for(i=0; i<k-1; i++)
    {
        //cout<<kk<<endl;
        kk+=((st[i]-'0')*powl(8,j));
        j++;
    }
    return kk;
}

ll decc(string st)
{
    ll i,k,j=0,kk=0;
    k=st.size();
    reverse(st.begin(),st.end());
    for(i=0; i<k; i++)
    {
        //cout<<k<<endl;
        kk+=((st[i]-'0')*powl(10,j));
        j++;
    }

    return kk;
}

int main()
{
    ll i,j,k,n,m,a,b;
    while(true)
    {
        string st;
        cin>>st>>n;
        if(st[0]=='0' && st.size()==1 && n==0)
        {
            return 0;
        }
        if(st[0]=='0' && st[1]=='x')
        {
            m=hexx(st);
        }
        else if(st[0]=='0')
        {
            //cout<<st<<endl;
            m=octt(st);
        }
        else
        {
            m=decc(st);
        }
        //cout<<m<<" "<<n<<endl;
        string ss;
        ll value;
        v.push_back({"--i",m});
        for(i=0;i<n;i++){
            cin>>st>>value;
            v.push_back({st,value});
        }

        reverse(v.begin(),v.end());

        ll ans=solve(n+1,m);
        v.clear();
        cout<<ans<<endl;
    }
}
