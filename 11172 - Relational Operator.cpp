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
    int n,i;
    long long int a,b;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a==b)
        {
            printf("=\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else if(a>b)
        {
            printf(">\n");
        }
    }
    return 0;
}
