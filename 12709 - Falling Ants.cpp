#include<bits/stdc++.h>


using namespace std;
#define db double
struct st{
   db v,ac;
};
bool com(st a, st b){
   if(a.ac!=b.ac)
      return a.ac>b.ac;
   else
    return a.v>b.v;
}
int main(){
   int t;
   while(true){
      scanf("%d",&t);
   if(t==0)break;
     st ar[t+10];
      db a,b,c;
      for(int i=0;i<t;i++){
      cin>>a>>b>>c;
      ar[i].v=a*b*c;
      ar[i].ac=9.8-(9.8/(2*c));
      }
      sort(ar,ar+t, com);

      cout<<ar[0].v<<endl;
   }

}
