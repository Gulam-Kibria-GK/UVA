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
    long long a,b,diff;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(a<=b)
        {
            diff=b-a;
        }
        else if(b<a)
        {
            diff=a-b;
        }
        printf("%lld\n",diff);
    }
    return 0;
}

