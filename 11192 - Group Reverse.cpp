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
    int  i,j,k,z,l,x,y,n;
    string st;

    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        cin>>st;
        x=st.size();
        y=(int)x/n;
        z=y;
        int f=0;
        for(j=0; j<n; j++)
        {
            for(i=f; i<y; i++)
            {
                cout<<st[z-1-i];
            }
            //f=i;
            z=z+y;
        }
        cout<<endl;
    }

}
