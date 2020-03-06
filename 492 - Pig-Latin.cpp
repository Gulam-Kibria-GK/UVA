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
    int n;
    char st;
    while((scanf("%c",&st))==1)
    {
        if(isalpha(st))
        {
            if(st=='a' || st=='e' || st=='i' || st=='o' || st=='u' || st=='A' || st=='E' || st=='I' || st=='O' || st=='U')
            {
                while(isalpha(st))
                {
                    printf("%c",st);
                    st=getchar();
                }
                printf("ay");
            }
            else
            {
                n=st;
                st=getchar();
                while(isalpha(st))
                {
                    printf("%c",st);
                    st=getchar();
                }
                printf("%c",n);
                printf("ay");
            }

        }

        printf("%c",st);
    }

}
