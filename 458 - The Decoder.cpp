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
    int i,n;
    char st[100];
    char st2[100];
    while(gets(st))
    {
        n=strlen(st);
        for(i=0;i<n;i++)
        {
            st2[i]=st[i]-7;
            printf("%c",st2[i]);
        }
        printf("\n");
    }
    return 0;
}
