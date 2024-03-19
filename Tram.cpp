#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int x,a,b,en=0,ex=0,kos=0;
  cin>>x;
 
  for(int i=1;i<=x;i++){
    cin>>a>>b;
    ex=en-a;
    en=ex+b;
if(en>kos)
    kos=en;
  }
  cout<<kos;
    return 0;
}
