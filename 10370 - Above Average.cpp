/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<stdio.h>
int main()
{
    int i,j,k=0,n,x,y,z,sum=0;
    int ar[10000];
    float ans,div;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        for(j=0; j<x; j++)
        {
            scanf("%d",&ar[j]);

            sum=sum+ar[j];
        }
        div=(1.0*sum)/x;
        for(j=0; j<x; j++)
        {
            if(ar[j]>div)
            {
                k++;
                z=x;
            }
        }
    ans=(k*100.00/z);
    printf("%.3f%%\n",ans);
    k=0;
    sum=0;
    }
    return 0;
}

