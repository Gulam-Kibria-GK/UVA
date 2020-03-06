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
    int i,j,x,n;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    for(i=0;i<n;i++)
    {
        int arr[100]={};
        for(j=0;j<10;j++)
        {
            cin>>arr[j];
        }
        int c=0,c2=0;
        for(j=0;j<10-1;j++)
        {
            if((arr[j]<arr[j+1]))
            {
                c++;
            }
            else if(arr[j]>arr[j+1])
            {
                c2++;
            }
        }
        if(c==9 || c2==9)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;

    }
}
