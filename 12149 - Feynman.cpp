/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        a=(n*(n+1)*(2*n+1))/6;
        cout<<a<<endl;
    }
    return 0;
}
