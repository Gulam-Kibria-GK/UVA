/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,sum=0,valu;
    char st[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",st);
        if(strlen(st)==5)
        {
            valu=3;
        }
        else
        {
          if(st[0]=='o')
        {
            sum=sum+1;
        }
        if(st[1]=='n')
        {
            sum=sum+1;
        }
        if(st[2]=='e')
        {
            sum=sum+1;
        }
        if(sum>=2)
        {
            valu=1;
        }
        else
        {
            valu=2;
        }
        }
        printf("%d\n",valu);
        sum=0;
    }
}
