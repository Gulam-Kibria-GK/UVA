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
    int i,n,a,b,n2,x,ar[100];
    char st[1000007],ch1,ch2;
    scanf("%d",&x);
    while(x--)
    {
        getchar();
        gets(st);
        n2=strlen(st);
        for(i=65; i<=90; i++)
        {
            ar[i]=i;
        }
        scanf("%d",&n);
        while(n--)
        {
            getchar();
            scanf("%c %c",&ch1,&ch2);
            a=(int)ch2;
            b=(int)ch1;
            for(i=65; i<=90; i++)
            {
                if(ar[i]==a)
                {
                    ar[i]=b;
                }
            }
        }
        for(i=0; i<n2; i++)
        {
            if(isalpha(st[i]))
            {
                printf("%c",ar[st[i]]);
            }
            else
            {
                printf("%c",st[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

