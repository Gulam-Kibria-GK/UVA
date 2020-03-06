/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;
#define MAX 5000
#define size 6000
int prime[size], status[MAX],cnt[MAX];
int p, d;

void siv()
{
    int n, i, j;
    status[0]=1,status[1]=1;
    cnt[0]=0,cnt[1]=1;
    prime[0]=1;
    n=MAX;
    for(i=2;i*i<=n;i++){
        if(status[i]==0){
            for(j=i*2;j<=n;j+=i){
                status[j]=1;
            }
        }
    }
    p=1;
    for(i=2; i<=n; i++)
    {
        if(status[i]==0)
            prime[p++] = i;
        cnt[i]=p;
    }
}

int main()
{
    siv();
    int lw,hi;
    int i,j,k,a,b,c;
    while(cin>>a>>c)
    {
        cout<<a<<" "<<c<<":";
        hi=cnt[a]/2+c-1;
        hi=min(cnt[a]-1,hi);
        lw=cnt[a]/2-c;
        if(cnt[a]%2==1)lw+=1;
        lw=max(0,lw);
        for(i=lw;i<=hi;i++){
            cout<<" "<<prime[i];
        }
        cout<<endl<<endl;
    }
}
