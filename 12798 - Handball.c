# -*- coding: utf-8 -*-
"""
Created on Thu Jul 18 03:09:09 2019

@author: Gulam Kibria

using python solution
"""

while(True):
    try:
        st=input()
        nn=st.split(" ")
        n,m=int(nn[0]),int(nn[1])
        ans=0
        for x in range(n):
            f=0;
            st=input()
            aa=st.split(" ")
            for y in aa:
                a=int(y)
                if(a==0):
                    f=1
            if(f==0):
                ans+=1
        print(ans)
    except:
        break
   