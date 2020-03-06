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
    ll i,n,x=0,a,b,c,d,l,value;
    while(1)
    {
        cin>>a>>b>>c>>d>>l;
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        for(i=0; i<=l; i++)
        {
            value=((a*(i*i))+(b*i)+c);
            if(value%d==0)
                x++;
        }
        cout<<x<<endl;
        x=0;
    }
    return 0;
}
