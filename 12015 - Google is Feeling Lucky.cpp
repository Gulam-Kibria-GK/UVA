/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;
struct ab
{
    string st;
};
int main()
{
    int i,n,j,x,arr[15],m;
    struct ab a[12];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<10;j++)
        {
            cin>>a[j].st>>arr[j];
        }
        m=arr[0];
        for(j=1;j<10;j++)
        {
            if(m<arr[j])
                m=arr[j];
        }
        cout<<"Case #"<<i<<":"<<endl;
        for(j=0;j<10;j++)
        {
            if(m==arr[j])
            {
                cout<<a[j].st<<endl;
            }
        }
    }
    return 0;
}
