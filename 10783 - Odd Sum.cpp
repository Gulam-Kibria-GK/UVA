/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/


#include<bits/stdc++.h>
using namespace std;
 int i;
int a[1000000]= {0};

void sum()
{
    for(i=0; i<1000000; i++)
    {
        if(i%2==1)
            a[i]=i;
    }
}

int main()
{
    int j,k,aa,b,l;
    cin>>k;
    sum();
    for(i=0;i<k;i++)
    {
        int sum=0;
        cin>>aa>>b;
        for(j=aa;j<=b;j++)
        {
            sum+=a[j];
        }
        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }
    return 0;
}
