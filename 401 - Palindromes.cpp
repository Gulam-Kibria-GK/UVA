/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<char,char>m;

int main()
{
    m['A']='A';
    m['E']='3';
    m['H']='H';
    m['I']='I';
    m['J']='L';
    m['L']='J';
    m['M']='M';
    m['O']='O';
    m['S']='2';
    m['T']='T';
    m['U']='U';
    m['V']='V';
    m['W']='W';
    m['X']='X';
    m['Y']='Y';
    m['Z']='5';
    m['1']='1';
    m['2']='S';
    m['3']='E';
    m['5']='Z';
    m['8']='8';
    ll i,j,k,l,n;
    string s;
    while(cin>>s)
    {
        string a,b;
        a=b="";
        n=s.size();
        for(i=n-1; i>=0; i--)
        {
            a+=s[i];
            b+=m[s[i]];
        }
        if(s==a && s==b)
            cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
        else if(s==a && s!=b)
            cout<<s<<" -- is a regular palindrome."<<endl<<endl;
        else if(s!=a && s==b)
            cout<<s<<" -- is a mirrored string."<<endl<<endl;
        else
            cout<<s<<" -- is not a palindrome."<<endl<<endl;
    }
    return 0;
}
