# -*- coding: utf-8 -*-
"""
Created on Mon May 27 02:02:41 2019

@author: Gulam Kibria
"""

#a,b=input(),input()

arr = [0]*1000000

def sum():
    for x in range(1000000):
        if(x%2):
            arr[x]=x


a=int(input())
sum()
#print (arr)
for x in range(0,a):
    s,r=int(input()),int(input())
    ans=0
    for y in range(s,r+1):
        ans+=arr[y]
    print ("Case",x+1,end='')
    print (":",ans)

