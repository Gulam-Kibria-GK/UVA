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
    char are[100];
    char a[]="Hajj";
    char b[]="Umrah";
    char c[]="*";
    int i=-1,n=0;
    while('\0' !=gets(are))
    {
        n++;
        i++;
        if(are[i]==a[i])
        {
            printf("Case %d: Hajj-e-Akbar\n",n);
            i=-1;
        }
        else if(are[i]==b[i])
        {
            printf("Case %d: Hajj-e-Asghar\n",n);
            i=-1;
        }
        else if(are[i]==c[i])
        {
            break;
        }
    }
    return 0;
}
