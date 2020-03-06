/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,va,vb,l,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        string st;
        cin>>st;
        va=(((st[0]-65)*powl(26,2))+((st[1]-65)*powl(26,1))+((st[2]-65)*powl(26,0)));
        vb=(((st[4]-48)*1000)+((st[5]-48)*100)+((st[6]-48)*10)+((st[7]-48)));
        if(abs(va-vb)<=100)
            cout<<"nice"<<endl;
        else
            cout<<"not nice"<<endl;
    }
    return 0;
}

