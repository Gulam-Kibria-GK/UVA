/*==============================================*\
ID:          Gulam_Kibria
 
Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh
 
 mail: gkpalash101@gmail.com
\*===============================================*/

#include<stdio.h>
#include<string.h>
int alpha(char ch)
{
    int x;
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
            {
                x=1;
            }
            else
                {
                    x=0;
                }
                return x;
}
int main()
{
    int i,n,x=0,y=0;;
    char st[100];
    while(gets(st))
    {
        n=strlen(st);
        for(i=0;i<n;i++)
        {
            if(alpha(st[i])==1 && alpha(st[i+1])==0)
            {
                y++;
            }
        }
        printf("%d\n",y);
        y=0;

    }
    return 0;
}

