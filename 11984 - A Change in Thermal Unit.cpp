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
    int i;
    float j,x,k,n,f,c;
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>c>>f;
        k=(9*c)/5+32;

        f=f+k;
        j=((5*f)-5*32)/9;

        printf("Case %d: %.2f\n",i+1,j);
    }
}
