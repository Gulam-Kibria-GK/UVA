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
    for(i=0;i<n;i++)
    {
        int arr[10];
        for(j=0;j<3;j++)
            cin>>arr[j];
        if(arr[1]+arr[0]>arr[2])
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
    return 0;
}
