/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;
const int n=2000000;
int x[n+5];
int main()
{
    int i,d;

    while(scanf("%d",&d)==1)
    {
        if(d==0)
            break;
        for(i=0;i<d;i++)
        {
            scanf("%d",&x[i]);
        }
        sort(x,x+d);
        for(i=0;i<d;i++)
        {
            printf("%d",x[i]);
            if(i!=d-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
